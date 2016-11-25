// acm100096.c
#include<stdio.h>
int main()
{
    int n=0;
    if(~(scanf("%d",&n)))
    {
        int m=0;
        for(int i=0; i<n; i++)
        {
            int count=0;
            if(~scanf("%d",&m))
            {
                for (int j=0; j<m; j++) {
                    int num;
                    scanf("%d",&num);
                    count+=num;
                }
            }
            if (i!=n-1)
                printf("%d\n\n",count);
             else
                printf("%d\n",count);
        }
    }
    return 0;
}

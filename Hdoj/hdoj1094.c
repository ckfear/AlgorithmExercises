// acm100094.c
#include<stdio.h>
int main()
{
    int m=0;
    while(~scanf("%d",&m))
    {
        int count=0;
        for (int j=0; j<m; j++) {
            int num;
            scanf("%d",&num);
            count+=num;
        }
        printf("%d\n",count);
    }
    return 0;
}

// hdoj 1108
#include<stdio.h>
int main()
{
    int m,n;
    while(~scanf("%d %d",&m,&n))
    {
        for(int i=1;i<=n;i++)
        {
            if(m*i%n==0)
            {
                printf("%d\n", m*i);
                break;
            }
        }
    }
    return 0;
}

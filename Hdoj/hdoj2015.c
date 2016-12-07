/*=============================================================================
 #
 #       Filename: hdoj2015.c
 #
 #         Author: fearHuang  - huangguoyoung@gmail.com
 #         Create: 2016-12-07 23:29:39
 #  Last modified: 2016-12-07 23:29
 #    Description:
 =============================================================================*/
#include<stdio.h>
int main()
{
    int n,m,i,j,sum=0;;
    while(~scanf("%d%d",&n,&m))
    {
        for(i=1,j=0;i<=n;++i)
        {
            sum+=i*2;
            j++;
            if(j==m&&i==n)
            {
                printf("%d\n",sum/m);
                sum=0;
                j=0;
            }
            else if(j==m&&i!=n)
            {
                printf("%d ",sum/m);
                sum=0;
                j=0;
            }
            else if(j!=m&&i==n)
            {
                printf("%d\n",sum/j);
                sum=0;
                j=0;
            }
        }
    }
}

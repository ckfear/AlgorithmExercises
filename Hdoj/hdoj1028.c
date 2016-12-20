/*===========================================================================
 #
 #       Filename: hdoj1028.c
 #
 #         Author: fearHuang  - huangguoyoung@gmail.com
 #         Create: 2016-12-15 11:10:28
 #  Last modified: 2016-12-15 11:10
 #    Description: 母函数
 ===========================================================================*/
#include<stdio.h>
int main()
{
    int c1[121],c2[121],n,i,j,k;
    while(~scanf("%d",&n))
    {
        for(i=0;i<=n;++i)
        {
            c1[i]=1;
            c2[i]=0;
        }
        for(i=2;i<=n;++i)
        {
            for(j=0;j<=n;++j)
                for(k=0;k+j<=n;k+=i)
                    c2[j+k]+=c1[j];
            for(j=0;j<=n;++j)
            {
                c1[j]=c2[j];
                c2[j]=0;
            }
        }
        printf("%d\n",c1[n]);
    }
    return 0;
}

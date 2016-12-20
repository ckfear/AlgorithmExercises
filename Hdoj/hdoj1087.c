/*===========================================================================
 #
 #       Filename: hdoj1087.c
 #
 #         Author: fearHuang  - huangguoyoung@gmail.com
 #         Create: 2016-12-12 10:27:28
 #  Last modified: 2016-12-12 10:27
 #    Description: dp
 ===========================================================================*/
#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int n,*a,*dp,max,i,j;
    while(~scanf("%d", &n) && 0!=n)
    {
        a=(int *)malloc(sizeof(int)*n);
        dp=(int *)malloc(sizeof(int)*n);
        for(i=0;i<n;++i)
            scanf("%d",&a[i]);
        for(i=0;i<n;++i)
            dp[i]=a[i];
        for(i=1;i<n;++i)
            for(j=0;j<i;j++)
                if(dp[j]+a[i]>dp[i]&&a[i]>a[j])
                    dp[i]=dp[j]+a[i];
        max=a[0];
        for(i=1;i<n;++i)
            if(dp[i]>max)
                max=dp[i];
        printf("%d\n",max);
        free(a);
        free(dp);
    }
    return 0;
}

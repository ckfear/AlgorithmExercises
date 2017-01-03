/*===========================================================================
 #
 #       Filename: hdoj1203.c
 #
 #         Author: fearHuang  - huangguoyoung@gmail.com
 #         Create: 2016-12-30 10:25:08
 #  Last modified: 2016-12-30 10:25
 #    Description:
 ===========================================================================*/
#include<stdio.h>
#define SIZE 10050
struct Node{
    int fee;
    double posi;
}node[SIZE];
double val(double a,double b)
{
    return 1-(1-a)*(1-b);
}

int main()
{
    int n,m,i,j;
    double max,dp[SIZE];
    while(~scanf("%d%d",&n,&m)&&(!n||!m))
    {
        max=0;
        for(i=0;i<m;++i)
        {
            scanf("%d%lf",&node[i].fee,&node[i].posi);
            node[i].posi=node[i].posi;
        }
        for(i=0;i<=n;++i)
            dp[i]=0;
        for(i=0;i<m;++i)
        {
            for(j=n;j>=node[i].fee;--j)
            {
                double p=val(dp[j-node[i].fee],node[i].posi);
                if (dp[j]<p)
                    dp[j]=p;
            }
        }
        printf("%.1lf%%\n",dp[n]*100);
    }
    return 0;
}

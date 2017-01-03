/*===========================================================================
 #
 #       Filename: hdoj1114.c
 #
 #         Author: fearHuang  - huangguoyoung@gmail.com
 #         Create: 2016-12-13 15:08:05
 #  Last modified: 2016-12-13 15:08
 #    Description: 背包问题
 ===========================================================================*/
#include<stdio.h>
#include<stdlib.h>
#define INF 1000000000
int main()
{
    int T,E,F,N,i,j,size,W[505],P[505],C[100100];
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d%d",&E,&F);
        scanf("%d",&N);
        size=F-E;
        for(i=0;i<=size;++i)
            C[i]=INF;
        for(i=0;i<N;++i)
            scanf("%d%d",&P[i],&W[i]);
        C[0]=0;
        for(i=0;i<N;++i)
            for(j=W[i];j<=size;++j)
                if(C[j]>C[j-W[i]]+P[i])
                    C[j]=C[j-W[i]]+P[i];
        if(C[size]==INF)
            printf("This is impossible.\n");
        else
            printf("The minimum amount of money in the piggy-bank is %d.\n",C[size]);
    }
    return 0;
}

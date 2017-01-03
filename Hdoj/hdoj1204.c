/*===========================================================================
 #
 #       Filename: hdoj1204.c
 #
 #         Author: fearHuang  - huangguoyoung@gmail.com
 #         Create: 2016-12-22 09:12:15
 #  Last modified: 2016-12-22 09:12
 #    Description:
 ===========================================================================*/
#include <stdio.h>
#include <math.h>
int main()
{
    int M,N;
    double q,p,y;
    while(~scanf("%d%d%lf%lf",&N,&M,&p,&q))
    {
        if(M==0){printf("1.00\n");continue;}
        if(N==0){printf("0.00\n");continue;}
        if(p==0||q==1){printf("0.00\n");continue;}
        if(q==0||p==1){printf("1.00\n");continue;}
        if(p==q){printf("%.2lf\n",1.0*N/(M+N));continue;}
        y=q*(1-p)/(p*(1-q));
        printf("%.2lf\n",(1.0-pow(y,N))/(1.0-pow(y,M+N)));
    }
}

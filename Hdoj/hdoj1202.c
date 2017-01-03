/*===========================================================================
 #
 #       Filename: hdoj1202.c
 #
 #         Author: fearHuang  - huangguoyoung@gmail.com
 #         Create: 2016-12-22 09:54:56
 #  Last modified: 2016-12-22 09:54
 #    Description:
 ===========================================================================*/
#include<stdio.h>
int main()
{
    int n,i;
    double sum,a,b,sum1;
    while(scanf("%d",&n)!=EOF)
    {
        sum=sum1=0;
        for(i=0;i<n;i++)
        {
            scanf("%lf%lf",&a,&b);
            if(b==-1)
                a=0;
            if(b<60&&b>=0)
                b=0;
            if(b>=60&&b<70)
                b=1;
            if(b>=70&&b<80)
                b=2;
            if(b>=80&&b<90)
                b=3;
            if(b>=90&&b<=100)
                b=4;
            sum+=a;
            sum1+=a*b;
        }
        if(sum==0)
            printf("-1\n");
        else
            printf("%.2lf\n",sum1/sum);
    }
    return 0;
}

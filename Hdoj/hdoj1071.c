/*===========================================================================
#
#       Filename: hdoj1071.c
#
#         Author: fearHuang  - huangguoyoung@gmail.com
#         Create: 2016-12-23 11:04:48
#  Last modified: 2016-12-23 11:04
#    Description: 
===========================================================================*/
#include <stdio.h>
#include <math.h>
double a,b,c,k,d;
double fun(double x)
{
    return (a*x*x*x)/3-(a*b+k/2)*x*x+(a*b*b+c-d)*x;
}
int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        double x1,y1,x2,y2,x3,y3;
        scanf("%lf%lf%lf%lf%lf%lf",&x1,&y1,&x2,&y2,&x3,&y3);
        b=x1;
        c=y1;
        a=(y2-y1)/(x2-x1)/(x2-x1);//a(x2-x1)^2+y1=y2;
        k=(y3-y2)/(x3-x2);    //y=kx+d;
        d=y2-x2*k;
        printf("%.2lf\n",fun(x3)-fun(x2));
    }
    return 0;
}

// hdoj2002
#include<stdio.h>
#define PI 3.1415927
int main()
{
    double r;
    while(~scanf("%lf",&r))
    {
        double V=4*PI*r*r*r/3;
        printf("%.3lf\n",V);
    }
}

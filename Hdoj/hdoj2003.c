// hdoj2003
#include<stdio.h>
int main()
{
    double n;
    while(~scanf("%lf",&n))
    {
        if(n<0)
            n=-n;
        printf("%.2f\n",n);
    }
}

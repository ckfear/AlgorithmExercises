/*=============================================================================
 #
 #       Filename: hdoj2014.c
 #
 #         Author: fearHuang  - huangguoyoung@gmail.com
 #         Create: 2016-12-06 23:27:56
 #  Last modified: 2016-12-06 23:27
 #    Description:
 =============================================================================*/
#include<stdio.h>
int main()
{
    int n;
    while(~scanf("%d",&n))
    {
        float max=0.0,min=100.0,sum=0;
        for(int i=0;i<n;++i)
        {
            float p;
            scanf("%f",&p);
            if(p>=max)
                max=p;
            if(p<=min)
                min=p;
            sum+=p;
        }
        printf("%.2f\n",(sum-max-min)/(n-2));
    }
}

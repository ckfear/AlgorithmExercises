/*=============================================================================
 #
 #       Filename: hdoj2007.c
 #
 #         Author: fearHuang  - huangguoyoung@gmail.com
 #         Create: 2016-12-05 17:38:35
 #  Last modified: 2016-12-05 17:38
 #    Description:
 =============================================================================*/
#include<stdio.h>
int main()
{
    int x,y;
    long long sum1,sum2;
    while(~scanf("%d%d",&x,&y))
    {
        sum1=0,sum2=0;
        if(x>y)
        {
            int temp=x;
            x=y;
            y=temp;
        }
        for(int i=x;i<=y;++i)
            if(i%2)
                sum2+=i*i*i;
            else
                sum1+=i*i;
        printf("%lld %lld\n",sum1,sum2);
    }
}

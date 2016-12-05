/*=============================================================================
 #
 #       Filename: hdoj2009.c
 #
 #         Author: fearHuang  - huangguoyoung@gmail.com
 #         Create: 2016-12-05 17:51:59
 #  Last modified: 2016-12-05 17:51
 #    Description:
 =============================================================================*/
#include<stdio.h>
#include<math.h>
int main()
{
    int m,n;
    double sum,temp;
    while(~scanf("%d%d",&m,&n))
    {
        sum=0;
        temp=(double)m;
        sum+=temp;
        for(int i=1;i<n;++i)
        {
            temp=sqrt(temp);
            sum+=temp;
        }
        printf("%.2f\n",sum);
    }
}

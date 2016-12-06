/*=============================================================================
 #
 #       Filename: hdoj2013.c
 #
 #         Author: fearHuang  - huangguoyoung@gmail.com
 #         Create: 2016-12-06 23:15:44
 #  Last modified: 2016-12-06 23:15
 #    Description:
 =============================================================================*/
#include<stdio.h>
int main()
{
    int n;
    while(~scanf("%d",&n))
    {
        int sum=1;
        while (--n)
            sum=(sum+1)*2;
        printf("%d\n",sum);
    }
}

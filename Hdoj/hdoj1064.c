/*===========================================================================
#
#       Filename: hdoj1064.c
#
#         Author: fearHuang  - huangguoyoung@gmail.com
#         Create: 2016-12-23 10:02:20
#  Last modified: 2016-12-23 10:02
#    Description: 
===========================================================================*/
#include<stdio.h>
int main()
{
	double x,s=0,n;
	n=12;
	while(n--)
	{
		scanf("%lf",&x);
		s+=x;
	}
	printf("$%.2lf\n",s/12);
    return 0;
}

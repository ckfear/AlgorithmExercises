/*===========================================================================
#
#       Filename: hdoj1038.c
#
#         Author: fearHuang  - huangguoyoung@gmail.com
#         Create: 2016-12-09 13:36:56
#  Last modified: 2016-12-09 13:36
#    Description: 
===========================================================================*/
#include <stdio.h>
#define P 3.1415927

int main()
{
	int n, c = 0;
	double t, d, v, s;
	while(scanf("%lf%d%lf", &d, &n, &t) != EOF && n != 0)
	{
		s = n * P * d/12/5280;
		v = s / (t/60/60);
		printf("Trip #%d: %.2lf %.2lf\n", ++c, s, v);
	}

	return 0;
}

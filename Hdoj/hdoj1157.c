/*===========================================================================
#
#       Filename: hdoj1157.c
#
#         Author: fearHuang  - huangguoyoung@gmail.com
#         Create: 2016-12-30 09:56:48
#  Last modified: 2016-12-30 09:56
#    Description: 
===========================================================================*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int num[10010];

int cmp(const void *a, const void *b)
{
	if(*(int *)a < *(int *)b)
		return -1;
	else if(*(int *)a > *(int *)b)
		return 1;
	else
		return 0;
}

int main()
{
	int k;
	while(scanf("%d", &k) != EOF)
	{
		int i = 0;
		while(i < k)
		{
			scanf("%d", &num[i]);
			i++;
		}
		qsort(num, k, sizeof(int), cmp);
		printf("%d\n", num[k/2]);
	}
	
}

/*===========================================================================
#
#       Filename: hdoj2018.c
#
#         Author: fearHuang  - huangguoyoung@gmail.com
#         Create: 2016-12-08 18:16:01
#  Last modified: 2016-12-08 18:16
#    Description: 
===========================================================================*/
#include <stdio.h>
int main(){
    int n,i,arr[60];
    arr[1]=1;
	arr[2]=2;
	arr[3]=3;
	arr[4]=4;
	for(i=5;i<56;i++)
	{
		arr[i]=arr[i-1]+arr[i-3];
	}
    while(scanf("%d",&n)!=EOF&&n!=0)
        printf("%d\n",arr[n]);
    return 0;
}

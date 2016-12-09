/*===========================================================================
#
#       Filename: hdoj2016.c
#
#         Author: fearHuang  - huangguoyoung@gmail.com
#         Create: 2016-12-08 17:14:50
#  Last modified: 2016-12-08 17:14
#    Description: 
===========================================================================*/
#include<stdio.h>
int main()
{
    int n,index,i,a[100];
    while(~scanf("%d",&n)&&n)
    {
        for(i=0;i<n;++i)
        {
            scanf("%d",&a[i]);       
        }
        index=0;
        for(i=1;i<n;++i)
        {
            if(a[i]<a[index])
                index=i;
        }
        int temp=a[0];
        a[0]=a[index];
        a[index]=temp;
        for(i=0;i<n;++i)
        {
            printf("%d",a[i]);
            if(i==n-1)
                printf("\n");
            else
                printf(" ");
        }
    }
}

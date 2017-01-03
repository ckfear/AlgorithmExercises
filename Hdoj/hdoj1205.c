/*===========================================================================
#
#       Filename: hdoj1205.c
#
#         Author: fearHuang  - huangguoyoung@gmail.com
#         Create: 2017-01-03 09:50:33
#  Last modified: 2017-01-03 09:50
#    Description: 
===========================================================================*/
#include <stdio.h>
#define x 1000000
#define max(a,b) a>b?a:b
int i,n,T,Max;
int a[x];
int main()
{
    scanf("%d",&T);
    while(T--)
    {
        
        __int64_t sum=0;
        scanf("%d",&n);
        Max=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            sum+=a[i];
            Max=max(Max,a[i]);
        }
        sum=sum-Max+1;
        if(sum>=Max) printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}

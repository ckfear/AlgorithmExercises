/*===========================================================================
#
#       Filename: hdoj1049.c
#
#         Author: fearHuang  - huangguoyoung@gmail.com
#         Create: 2016-12-22 15:51:14
#  Last modified: 2016-12-22 15:51
#    Description: 
===========================================================================*/
#include <stdio.h>
int main(){
    int n,u,d;
    while(scanf("%d",&n)!=EOF)
    {
        if(n==0)
            break;
        int c;
        scanf("%d%d",&u,&d);
        if((n-u)%(u-d)==0)
            c=(n-u)/(u-d);
        else
            c=(n-u)/(u-d)+1;
        d=(c*2)+1;
        printf("%d\n",d);
    }
}

/*===========================================================================
#
#       Filename: hdoj1037.c
#
#         Author: fearHuang  - huangguoyoung@gmail.com
#         Create: 2016-12-09 11:38:08
#  Last modified: 2016-12-09 11:38
#    Description: 
===========================================================================*/
#include <stdio.h>
int ans(int a,int b,int c){
    if(a<=168)
        return a;
    if(b<=168)
        return b;
    if(c<=168)
        return c;
    else
        return 0;
}
int main()
{
    int a,b,c;
    while(scanf("%d%d%d",&a,&b,&c) != EOF){
        if(a<=168 || b<=168 || c<= 168)
            printf("CRASH %d\n",ans(a,b,c));
        else
            printf("NO CRASH\n");
    }
    return 0;
}

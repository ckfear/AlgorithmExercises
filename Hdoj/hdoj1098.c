/*===========================================================================
#
#       Filename: hdoj1098.c
#
#         Author: fearHuang  - huangguoyoung@gmail.com
#         Create: 2016-12-22 11:02:03
#  Last modified: 2016-12-22 11:02
#    Description: 
===========================================================================*/
#include <stdio.h>
int main()
{
    int i,k;
    while(~scanf("%d",&k))
    {
        for(i=1;i<=65;i++)
        {
            if((18+i*k)%65==0)
            {
                printf("%d\n",i);
                break;
            }
        }
        if(i>=66)
            printf("no\n");
    }
    return 0;
}

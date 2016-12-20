/*===========================================================================
#
#       Filename: hdoj1085.c
#
#         Author: fearHuang  - huangguoyoung@gmail.com
#         Create: 2016-12-12 16:52:10
#  Last modified: 2016-12-12 16:52
#    Description: 
===========================================================================*/
#include<stdio.h>
int main()
{
    int n_1,n_2,n_5;
    while(~scanf("%d%d%d",&n_1,&n_2,&n_5)&&!(!n_1&&!n_2&&!n_5))
    {
        if(n_1)
            if(n_1+n_2*2>=5)
                printf("%d\n",n_1+n_2*2+n_5*5+1);
            else
                printf("%d\n",n_1+n_2*2+1);
        else
            printf("1\n");
    }
    return 0;
}

/*===========================================================================
 #
 #       Filename: hdoj1030.c
 #
 #         Author: fearHuang  - huangguoyoung@gmail.com
 #         Create: 2016-12-22 16:12:49
 #  Last modified: 2016-12-22 16:12
 #    Description:
 ===========================================================================*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int M,N,colm,coln,leftm,leftn,rightm,rightn;
    while(~scanf("%d%d",&M,&N))
    {
        colm=sqrt(M-1)+1;
        coln=sqrt(N-1)+1;
        leftm=(M-(colm-1)*(colm-1)+1)/2;
        leftn=(N-(coln-1)*(coln-1)+1)/2;
        rightm=(colm*colm-M)/2+1;
        rightn=(coln*coln-N)/2+1;
        int res=(abs(coln-colm))+(abs(leftn-leftm))+(abs(rightm-rightn));
        printf("%d\n",res);
    }
    return 0;
}

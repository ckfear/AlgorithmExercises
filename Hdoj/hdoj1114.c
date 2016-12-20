/*===========================================================================
#
#       Filename: hdoj1114.c
#
#         Author: fearHuang  - huangguoyoung@gmail.com
#         Create: 2016-12-13 15:08:05
#  Last modified: 2016-12-13 15:08
#    Description: 
===========================================================================*/
#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int val,wei;
    float sca;
}Node;
int comp(const void*a,const void *b)
{
    Node n1=*(Node*)a;
    Node n2=*(Node*)b;
    if(n1.sca>n2.scale)
        return 1;
    else if(n1.sca<n2.sca)
        return -1;
    else
        return n1.wei-n2.wei;
}

int main()
{
    int 
    return 0;
}

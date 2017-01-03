/*===========================================================================
#
#       Filename: hdoj1070.c
#
#         Author: fearHuang  - huangguoyoung@gmail.com
#         Create: 2016-12-29 15:29:11
#  Last modified: 2016-12-29 15:29
#    Description: 
===========================================================================*/
#include<stdio.h>
#include<stdlib.h>
typedef struct{
    char a[101];
    int p,v;
    double bi;
}milk;
milk b[101];
int comp(const void* a,const void* b){
    milk* p1 = (milk*)a;
    milk* p2 = (milk*)b;
    return ((p1->bi)>(p2->bi)?1:-1);
}
int main(){
    int T,n,i;
    scanf("%d",&T);
    while(T--){
        scanf("%d",&n);
        for(i=0 ;i<n ;i++){
            scanf("%s%d%d",b[i].a,&b[i].p,&b[i].v);
            if(b[i].v < 200)
                b[i].p = 0;
            if(b[i].v>1000)
                b[i].v = 1000;
            if(b[i].v % 200 != 0){
                b[i].v -= (b[i].v%200);
            }
            b[i].bi = 1.0*b[i].p/b[i].v;
        }
        qsort(b,n,sizeof(b[0]),comp);
        for(i=0 ;i<n ;i++){
            if(b[i].p > 0){
                printf("%s\n",b[i].a);
                break;
            }
        }
        
    }
    return 0;
}

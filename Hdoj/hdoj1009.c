/*=============================================================================
#
#       Filename: hdoj1009.c
#
#         Author: fearHuang  - huangguoyoung@gmail.com
#         Create: 2016-12-06 16:30:14
#  Last modified: 2016-12-06 16:30
#    Description: 
=============================================================================*/
#include <stdio.h>
#include <stdlib.h>

typedef struct{
    double a;
    double b;
    double d;
}CatRoom ;
CatRoom room[100010];

int cmp (const void *m, const void *n);

int cmp (const void *m, const void *n){
    int ret = (*(CatRoom *)m).d>(*(CatRoom *)n).d ? -1:1;
    return ret;
}

int main(){
    int M, N;
    double countA, countB;
    while (scanf("%d %d", &M, &N)!=EOF && !(M==-1 && N==-1)) {
        countA=0, countB=0;
        for (int i=0; i<N; i++) {
            scanf("%lf %lf", &room[i].a, &room[i].b);
            room[i].d = room[i].a/room[i].b;
        }
        qsort(room, N, sizeof(room[0]), cmp);
        for (int i=0; i<N; i++) {
            if (M-countA<=0) {
                break;
            } else if (M-countA>=room[i].b) {
                countB += room[i].a;
                countA += room[i].b;
            } else if (M-countA<room[i].b) {
                countB += (M-countA)*room[i].d;
                countA += M-countA;
            }
        }
        printf("%.3lf\n", countB);
    }
}

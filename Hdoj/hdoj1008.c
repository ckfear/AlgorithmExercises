/*=============================================================================
#
#       Filename: hdoj1008.c
#
#         Author: fearHuang  - huangguoyoung@gmail.com
#         Create: 2016-12-06 16:24:56
#  Last modified: 2016-12-06 16:24
#    Description: 
=============================================================================*/
#include <stdio.h>
int main(){
    int N;
    while (scanf("%d", &N)!=EOF && N!=0) {
        int old=0, new=0, count=0;
        for (int i=0; i<N; i++) {
            scanf("%d", &new);
            if (new>old) {
                count += (new-old)*6+5;
            } else if (new<old){
                count += (old-new)*4+5;
            } else if (new == old){
                count += 5;
            }
            old = new;
        }
        printf("%d\n", count);
    }
}

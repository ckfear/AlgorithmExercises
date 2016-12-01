//hdoj1005
#include <stdio.h>

int num(int A, int B, int n);

int main(){
    int A, B, n;
    while (scanf("%d %d %d", &A, &B, &n) != EOF) {
        if (!(A==B && A==n && A==0)) {
            printf("%d\n", num(A, B, n%48));
        } else {
            return 0;
        }
    }
}

int num(int A, int B, int n){
    if (1 == n) {
        return 1;
    } else if (2 == n){
        return 1;
    } else {
        return (A*num(A, B, n-1)+B*num(A, B, n-2)) % 7;
    }
}

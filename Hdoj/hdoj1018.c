#include <stdio.h>
#include <math.h>
int main() {
    int index, n;
    scanf("%d", &index);
    while(index){
        index--;
        scanf("%d", &n);
        double count=0;
        for(int i=1; i<=n; i++){
            count += log10(i);
        }
        printf("%d\n", (int)count+1);
    }
}

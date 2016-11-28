// hdoj1004
#include <stdio.h>
#include <string.h>
int main(){
    int N;
    while (scanf("%d", &N)!=EOF) {
        if (N) {
            int num[1000];
            char color[1000][16];
            num[0] = 0;
            scanf("%s", color[0]);
            for (int i=1; i<N; i++) {
                num[i] = 0;
                scanf("%s", color[i]);
                for (int j=0; j<i-1; j++) {
                    if (strcmp(color[j], color[i]) == 0) {
                        num[i] += 1;
                    }
                }
            }
            int index = 0;
            int maxNum = 0;
            for (int i=0; i<N; i++) {
                if (num[i]>maxNum) {
                    maxNum = num[i];
                    index = i;
                }
            }
            printf("%s\n", color[index]);
        } else {
            return 0;
        }
    }
}

// acm100021
#include <stdio.h>
int main () {
    int index;
    while (scanf("%d", &index) != EOF) {
        if ((index-2)%4 == 0) {
            printf("yes\n");
        } else {
            printf("no\n");
        }

    }
    return 0;
}

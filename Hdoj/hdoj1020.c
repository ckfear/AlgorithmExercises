// ACM100020.c
#include <stdio.h>
#include <string.h>
char a[26];

void dfs (char str[]) {
    for (int i=0; i<strlen(str), i++) {
        char ch = str[i];
        a[ch-'A']++;
    }
}

int main () {
    int count;
    memset(a, 0, sizeof(int));
    if (scanf("%d", &count)) {
        for (int i=0; i<count; i++) {
            char str[100];
            if (scanf("%s", str)) {
                dfs(str);
                for (int i=0; i<26; i++) {
                    if (a[i]) {
                        printf("%c%d", i+'A'-'0', a[i]);
                    }
                }
            }

        }
    }

}

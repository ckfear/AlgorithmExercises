// hdoj1002
#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000], b[1000];
    int x[1001];
    int n;
    scanf("%d", &n);
    for (int i=0; i<n; i++) {
        scanf("%s %s", a, b);
        unsigned long alength = strlen(a);
        unsigned long blength = strlen(b);
        unsigned long maxlength = alength>blength ? alength:blength;
        for (int i=0; i<=maxlength; i++) {
            x[i]=0;
        }
        for (int j=(int)(maxlength-1); j>=0; j--) {
            if (alength>blength) {
                if (blength==0) {
                    x[j+1] += a[--alength]-'0';
                } else {
                    x[j+1] += (a[--alength]-'0') + (b[--blength]-'0');
                }
                if (x[j+1]/10) {
                    x[j]++;
                    x[j+1] %= 10;
                }
            } else {
                if (alength==0) {
                    x[j+1] += b[--blength]-'0';
                } else {
                    x[j+1] += (a[--alength]-'0') + (b[--blength]-'0');
                }
                if (x[j+1]/10) {
                    x[j]++;
                    x[j+1] %= 10;
                }
            }
        }
        printf("Case %d:\n", i+1);
        printf("%s + %s = ", a, b);
        for (int i=0; i<=maxlength; i++) {
            if (x[0]==0 && i==0) {
                continue;
            }
            printf("%d", x[i]);
        }
        if (i == n-1) {
            printf("\n");
        } else {
            printf("\n\n");
        }
    }
}

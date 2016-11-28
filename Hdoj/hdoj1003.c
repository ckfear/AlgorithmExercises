// hdoj1003
#include<stdio.h>
int main()
{
    int a[100010];
    int caseNumber, beginIndex, endIndex, beginNumber, sumNumber, maxNumber = 0;
    int m=0;
    scanf("%d", &caseNumber);
    while (caseNumber) {
        caseNumber--;
        m++;
        int n=0;
        scanf("%d", &n);
        for (int i=0; i<n; i++) {
            scanf("%d", &a[i]);
        }
        beginIndex = 0;
        endIndex = 0;
        beginNumber = 0;
        sumNumber = a[0];
        maxNumber = a[0];
        for (int i=1; i<n; i++) {
            if (sumNumber < 0) {
                beginNumber = i;
                sumNumber = a[i];
            } else {
                sumNumber += a[i];
            }
            if (sumNumber > maxNumber) {
                maxNumber = sumNumber;
                beginIndex = beginNumber;
                endIndex = i;
            }
        }
        printf("Case %d:\n", m);
        printf("%d %d %d", maxNumber, beginIndex+1, endIndex+1);
        if (caseNumber) {
            printf("\n\n");
        } else {
            printf("\n");
        }
    }
}

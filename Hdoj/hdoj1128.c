// hdoj1128
#include<stdio.h>
#include <string.h>
long mark[1100000],i,a,b;
int main()
{
    memset(mark, 0, sizeof(mark));
    for (i=1; i<=1000000; i++) {
        a=i,b=i;
        while (a) {
            b+=a%10;
            a/=10;
        }
        mark[b]=1;
        if (!mark[i]) {
            printf("%ld\n", i);
        }
    }
}

// acm100042
#include <stdio.h>
#include <string.h>
#define base 100000;
#define len 10000;
void multiply(int a[], int num)
{
    for (int carry=0,i=len;i>=0;i--)
    {
        carry += a[i]*num;
        a[i] = carry%base;
        carry /= base
    }
}

int main()
{
    int n,j=0;
    int h[len];
    while(scanf("%d", &n) && n!=0)
    {
        memset(h,0,sizeof(int)*len);
        for(int i=0;i<=n;i++) 
        {
            multiply(h, n);
        }
        while(h[j]==0)
        {
            j++;
        }
        for(int i=len;i>=j;i--)
        {
            printf("%d", h[i]);
        }
        printf("\n");
    }
    return 0;
}

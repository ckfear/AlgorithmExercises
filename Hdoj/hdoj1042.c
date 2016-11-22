// acm100042
#include <stdio.h>
#include <string.h>
#define base 100000
#define len 10000
void multiply(int a[], int num)
{
    for (int carry=0,i=len-1;i>=0;i--)
    {
        carry += a[i]*num;
        a[i] = carry%base;
        carry /= base;
    }
}

int main()
{
    int n, h[len];
    while(~scanf("%d", &n))
    {
        memset(h,0,sizeof(int)*len);
        h[len-1]=1;
        int i,j=0;
        for(i=2;i<=n;i++)
        {
            multiply(h, i);
        }
        while(h[j]==0)
        {
            j++;
        }
        printf("%d", h[j]);
        for(j++;j<len;j++)
        {
            printf("%05d", h[j]);
        }
        printf("\n");
    }
    return 0;
}

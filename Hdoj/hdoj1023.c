// acm100023.c
// catalan number 
// h(n)=h(n-1)*(4*n-2)/(n+1)
#include <stdio.h>
#include <string.h>
#define len 12
#define base 100000

void multiply(int *a, int b) 
{
    for (int i=len-1,int carry=0; i>=0; i--) 
    {
        carry += a[i]*b;
        a[i] = a[i]%base;
        carry /= base;
    }
}

void divide(int *a, int b)
{
    for (int i=0,int div=0; i<len; i--)
    {
        div = div*base+a[i];
        a[i] = div/b;
        div %= b;
    }
}

int main() 
{
    int n;
    while(~scanf("%d", &n) && n)
    {
        int i,j=0,h[101][len];
        memset(h[1],0,len*sizeof(int));
        h[1][len-1]=1;
        for (int i=2; i<=n; i++)
        {
            memcpy(h[i],h[i-1],len*sizeof(int));
            multiply(h[i],4*i-2);  
            divide(h[i],i+1);
        }
        while(h[n][j]==0)
        {
            j++;
        }
        printf("%d", h[n][j++]);
        for(;j<len;j++)
            printf("%05d", h[n][j]);
        printf("\n");
    }
    return 0;
}

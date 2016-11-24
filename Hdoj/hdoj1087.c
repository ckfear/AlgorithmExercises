// acm100087.c
#include <stdio.h>
int main ()
{
    int n;
    while(~scanf("%d", &n) && 0!=n)
    {
        int a,b,result=0;
        for(int i=0; i<n; i++)
        {
            scanf("%d", &a);
            if(a>b)
            {
                result+=a;
                b=a;
            }
        }
        printf("%d\n", result);
    }
}

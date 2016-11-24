// acm100092.c
#include<stdio.h>
int main()
{
    int n=0;
    while (~scanf("%d", &n))
    {
        int count=0,num=0;
        if (0==n)
            continue;
        for (int i=0; i<n; i++)
        {
            scanf("%d", &num);
            count += num;
        }
        printf("%d\n", count);
    }
}

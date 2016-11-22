// acm100040
#include <stdio.h>
void sort(int a[], int count)
{
    for (int i=0; i<count; i++)
    {
        for (int j=0;j<count-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp = a[j+1];
                a[j+1] = a[j];
                a[j] = temp;
            }
        }
        
    }
}

int main()
{
    int n=0;
    if(~scanf("%d",&n)&&n!=0)
    {
        for (int i=0;i<n;i++)
        {
            int a[1000], count=0;
            scanf("%d", &count);
            for (int i=0; i<count; i++)
            {
                scanf("%d", &a[i]);
            }
            sort(a, count);
            for (int j=0;j<count;j++)
            {
                if (j==count-1)
                {
                    printf("%d", a[j]);
                }
                else
                {
                printf("%d ",a[j]);
                }
            }
            printf("\n");
        }
    }
    return 0;
}

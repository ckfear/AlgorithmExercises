//hdoj2011
#include<stdio.h>
float count(int n)
{
    float count=0;
    for(int i=1;i<=n;i++)
    {
        if(i%2)
            count+=1./i;
        else
            count-=1./i;
    }
    return count;
}

int main()
{
    int m;
    while(~scanf("%d",&m))
    {
        for(int i=0;i<m;i++)
        {
            int n;
            scanf("%d",&n);
            printf("%.2f\n",count(n));
        }
    }
}

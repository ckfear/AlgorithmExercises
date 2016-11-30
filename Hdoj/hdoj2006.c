// hdoj2006
#include<stdio.h>
int isEven(int num)
{
    if(num%2)
        return 1;
    else
        return 0;
}

int main()
{
    int N;
    while(~scanf("%d",&N))
    {
        int count=1;
        int a;
        for(int i=0;i<N;i++)
        {
            scanf("%d",&a);
            if(isEven(a))
                count*=a;
        }
        printf("%d\n",count);
    }
}

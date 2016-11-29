// hdoj1164
#include<stdio.h>
#include<math.h>
int factor(int num)
{
    for(int i=2;i<=(int)pow(num,0.5);i++)
    {
        if(!(num%i))
            return i;
    }
    return num;
}

int main()
{
    int num;
    while(~scanf("%d",&num))
    {
        while(num!=1)
        {
            int a=factor(num);
            num/=a;
            printf("%d",a);
            if(num!=1)
                printf("*");
        }
        printf("\n");
    }
}

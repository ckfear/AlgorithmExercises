
// hdoj2010
#include<stdio.h>
int isSatisfy(int num)
{
    int a,b,c;
    a=num%10;
    b=num%100/10;
    c=num/100;
    if(num==a*a*a+b*b*b+c*c*c)
        return 1;
    return 0;
}

int main()
{
    int m,n;
    int flag=0;
    while(~scanf("%d %d",&m,&n))
    {
        flag=0;
        for(int i=m;i<=n;i++)
        {
            if(isSatisfy(i))
            {
                if(flag==1)
                    printf(" ");
                printf("%d",i);
                flag=1;
            }
        }
        if(flag==0)
            printf("no\n");
        else
            printf("\n");
    }
}

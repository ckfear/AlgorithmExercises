// hdoj1197
#include<stdio.h>
#define BOOL int
#define YES 1
#define NO 0

BOOL satisfy(int num)
{
    int a,b,c;
    int temp=num;
    while(temp)
    {
        a+=temp%10;
        temp=temp/10;
    }
    temp=num;
    while(temp)
    {
        b+=temp%12;
        temp=temp/12;
    }
    temp=num;
    while(temp)
    {
        c+=temp%16;
        temp=temp/16;
    }
    if(a==b && b==c)
        return YES;
    else
        return NO;
}

int main()
{
    for(int i=2992;i<10000;i++)
    {
        if(satisfy(i))
        {
            printf("%d\n", i);
        }
    }
}

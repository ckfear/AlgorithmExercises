/*=============================================================================
 #
 #       Filename: hdoj2012.c
 #
 #         Author: fearHuang  - huangguoyoung@gmail.com
 #         Create: 2016-12-06 22:52:24
 #  Last modified: 2016-12-06 22:52
 #    Description:
 =============================================================================*/
#include<stdio.h>
#include<math.h>
int issushu(int num)
{
    int foo=num*num+num+41;
    for(int i=2;i<sqrt(foo);++i)
    {
        if(foo%i==0)
            return 1;
    }
    return 0;
}

int main()
{
    int x,y;
    while(~scanf("%d%d",&x,&y)&&!(x==0&&y==0))
    {
        int flag=0;
        for(int i=x;i<=y;i++)
        {
            if(issushu(i))
                flag=1;
        }
        if(flag)
            printf("Sorry\n");
        else
            printf("OK\n");
    }
}

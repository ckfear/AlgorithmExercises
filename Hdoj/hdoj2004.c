// hdoj2004
#include<stdio.h>
int main()
{
    int N;
    while(~scanf("%d",&N))
    {
        if(N>=0&&N<60)
            printf("E\n");
        else if(N>=60&&N<70)
            printf("D\n");
        else if(N>=70&&N<80)
            printf("C\n");
        else if(N>=80&&N<90)
            printf("B\n");
        else if(N>=90&&N<=100)
            printf("A\n");
        else
            printf("Score is error!\n");
    }
}

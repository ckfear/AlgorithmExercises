// hdoj1196
#include <stdio.h>
#include <math.h>
int main()
{
    int N;
    while(~scanf("%d",&N) && N)
    {
        int a=0;
        while(1)
        {
            if(N%2)
                break;
            N/=2;
            a++;
        }
        printf("%d\n",(int)pow(2,a));
    }
}

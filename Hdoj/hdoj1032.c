// acm100032.c
#include <stdio.h>
int cycleTimes(int num)
{
    int count=0;
    while(num!=1)
    {
        count++;
        if(num%2==1)
            num=3*num+1;
        else 
            num=num/2;
    }
    count++;
    return count;
}
int main()
{
    int m.n,result=0;
    while(~scanf("%d %d",&m,&n))
    {
        printf("%d %d ",m,n);
        for(int i=m;i<n;i++)
        {
            int count = cycleTimes(i);
            if(result<count)
            {
                result=count;
            }
        }
        printf("%d\n",result);
    }
}

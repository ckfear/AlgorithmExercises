/*=============================================================================
 #
 #       Filename: hdoj1032.c
 #
 #         Author: fearHuang  - huangguoyoung@gmail.com
 #         Create: 2016-12-08 10:11:15
 #  Last modified: 2016-12-08 10:11
 #    Description:
 =============================================================================*/
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
    int m,n,result=0;
    while(~scanf("%d %d",&m,&n))
    {
        result=0;
        printf("%d %d ",m,n);
        int i=0,j=0;
        if(m<n)
            i=m,j=n;
        else
            j=m,i=n;
        for(;i<=j;i++)
        {
            int count = cycleTimes(i);
            if(result<count)
                result=count;
        }
        printf("%d\n",result);
    }
}

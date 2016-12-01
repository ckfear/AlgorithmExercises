// hdoj2008
#include<stdio.h>
int main()
{
    int n;
    int count_a,count_b,count_c;
    while(~scanf("%d",&n)&&n)
    {
        count_a=0;
        count_b=0;
        count_c=0;
        for(int i=0;i<n;i++)
        {
            float m;
            scanf("%f",&m);
            if(m<0)
                count_a++;
            else if(m==0)
                count_b++;
            else 
                count_c++;
        }
        printf("%d %d %d\n",count_a,count_b,count_c);
    }
}

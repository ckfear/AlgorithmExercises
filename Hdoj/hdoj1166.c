// hdoj1166
#include<stdio.h>
int main()
{
    int m,p=0;
    while(~scanf("%d",&m) && m)
    {
        p++;
        m--;
        printf("Case %d:\n",p);
    }
    int a[50001], N;
    scanf("%d", &N);
    for(int i=0;i<N;i++)
    {
        scanf("%d", a[i]);
    }
    char *command;
    while(~scanf("%s",command) && command!="End")
    {
        int x,y;
        scanf("%d %d", &x, &y);
        if(command=="Query")
        {
            int count=0;
            for(;x<x+y;x++)
            {
                count+=a[x];
            }
        }
        if(command=="Add")
            a[x]=a[x]+y;
        if(command=="Sub")
            a[x]=a[x]-y;
    }
}

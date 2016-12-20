/*===========================================================================
 #
 #       Filename: hdoj1051.c
 #
 #         Author: fearHuang  - huangguoyoung@gmail.com
 #         Create: 2016-12-13 09:56:53
 #  Last modified: 2016-12-13 09:56
 #    Description:
 ===========================================================================*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Node{
    int x,y,index;
}node[5001];

int comp(const void*a,const void*b)
{
    struct Node n1=*(struct Node*)a;
    struct Node n2=*(struct Node*)b;
    if(n1.x==n2.x)
        return n1.y-n2.y;
    else
        return n1.x-n2.x;
}

int main()
{
    int T,n,i,j,count,pre_w;
    scanf("%d",&T);
    while(T--)
    {
        memset(node,0,sizeof(node));
        count=pre_w=0;
        scanf("%d",&n);
        for(i=0;i<n;++i)
            scanf("%d %d",&node[i].x,&node[i].y);
        qsort(node,n,sizeof(struct Node),comp);
        for(i=0;i<n;++i)
        {
            if(0==node[i].index)
            {
                count++;
                node[i].index=1;
                pre_w=node[i].y;
                for(j=i+1;j<n;++j)
                {
                    if(0==node[j].index&&node[j].y>=pre_w)
                    {
                        node[j].index=1;
                        pre_w=node[j].y;
                    }
                }
            }
        }
        printf("%d\n",count);
    }
    return 0;
}

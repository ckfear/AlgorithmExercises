/*===========================================================================
#
#       Filename: hdoj1025.c
#
#         Author: fearHuang  - huangguoyoung@gmail.com
#         Create: 2016-12-15 20:42:26
#  Last modified: 2016-12-15 20:42
#    Description: LIS 最长增长子序列
===========================================================================*/
#import<stdio.h>
#import<string.h>
#import<stdlib.h>
#define M 500001
struct Node{
    int p,r;
}node[M];

int comp(const void*a,const void*b)
{
    struct Node n1=*(struct Node*)a;
    struct Node n2=*(struct Node*)b;
    if(n1.p==n2.p)
        return n1.r-n2.r;
    else
        return n1.p-n2.p;
}

int find(int *a,int len,int n)
{
    int left=0,right=len,mid=(left+right)/2;
    while(left<=right)
    {
        if(n>a[mid])
            left=mid+1;
        else if(n<a[mid])
            right=mid-1;
        else
            return mid;
        mid=(left+right)/2;
    }
    return left;
}

int main()
{
    int n,i,j,a[M],len,num=1;
    while(~scanf("%d",&n))
    {
        memset(node,0,sizeof(node));
        for(i=0;i<n;++i)
            scanf("%d %d",&node[i].p,&node[i].r);
        qsort(node,n,sizeof(struct Node),comp);
        a[0]=-1;
        a[1]=node[0].r;
        len=1;
        for(i=1;i<n;i++)
        {
            j=find(a,len,node[i].r);
            a[j]=node[i].r;
            if(j>len)
                len=j;
        }
        printf("Case %d:\n",num++);
        if(len==1)
            printf("My king, at most 1 road can be built.\n\n");
        else
            printf("My king, at most %d roads can be built.\n\n",len);
    }
    return 0;
}

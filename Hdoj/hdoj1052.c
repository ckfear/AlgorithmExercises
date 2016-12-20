/*===========================================================================
 #
 #       Filename: hdoj1052.c
 #
 #         Author: fearHuang  - huangguoyoung@gmail.com
 #         Create: 2016-12-12 17:17:10
 #  Last modified: 2016-12-12 17:17
 #    Description:
 ===========================================================================*/
#include<stdio.h>
#include<stdlib.h>
int comp(const void*a,const void*b)
{
    int n1=*(int*)a;
    int n2=*(int*)b;
    return n1-n2;
}

int main()
{
    int n,*a,*b,i,money,l1,l2,r1,r2;
    while(~scanf("%d",&n)&&n)
    {
        a=(int*)malloc(sizeof(int)*n);
        b=(int*)malloc(sizeof(int)*n);
        for(i=0;i<n;++i)
            scanf("%d",&a[i]);
        for(i=0;i<n;++i)
            scanf("%d",&b[i]);
        qsort(a,n,sizeof(int),comp);
        qsort(b,n,sizeof(int),comp);
        l1=l2=money=0;
        r1=r2=n-1;
        while (l1<=r1)
        {
            if(a[l1]>b[l2])
            {
                money+=200;
                l1++;
                l2++;
            }
            else if(a[r1]>b[r2])
            {
                money+=200;
                r1--;
                r2--;
            }
            else
            {
                if(a[l1]<b[r2])
                    money-=200;
                l1++;
                r2--;
            }
        }
        printf("%d\n",money);
        free(a);
        free(b);
    }
    return 0;
}

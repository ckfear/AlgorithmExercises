/*===========================================================================
 #
 #       Filename: hdoj1029.c
 #
 #         Author: fearHuang  - huangguoyoung@gmail.com
 #         Create: 2016-12-22 14:48:58
 #  Last modified: 2016-12-22 14:48
 #    Description:
 ===========================================================================*/
#include<stdio.h>
#include<stdlib.h>
int cmp(const void *a,const void *b)
{
    return *(int *)a-*(int *)b;
}
int main()
{
    int n,*a,cnt,i;
    while(~scanf("%d",&n))
    {
        a=(int*)malloc(sizeof(int)*n);
        cnt=1;
        for(i=0;i<n;++i)
            scanf("%d",&a[i]);
        qsort(a,n,sizeof(int),cmp);
        for(i=1;i<n;++i)
        {
            if(a[i]==a[i-1])
                cnt++;
            else
                cnt=1;
            if(cnt==(n+1)/2)
            {
                printf("%d\n",a[i]);
                break;
            }
        }
    }
    return 0;
}

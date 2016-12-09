/*===========================================================================
 #
 #       Filename: hdoj2017.c
 #
 #         Author: fearHuang  - huangguoyoung@gmail.com
 #         Create: 2016-12-08 17:37:12
 #  Last modified: 2016-12-08 17:37
 #    Description:
 ===========================================================================*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int n,i,count;
    while(~scanf("%d",&n))
    {
        char *a;
        a=(char *)malloc(sizeof(char)*100);
        for(i=0;i<n;i++)
        {
            count=0;
            memset(a,0,sizeof(char));
            scanf("%s",a);
            for(int j=0;j<strlen(a);++j)
            {
                if(a[j]>='0'&&a[j]<='9')
                    count++;
            }
            printf("%d\n",count);
        }
        free(a);
    }
}

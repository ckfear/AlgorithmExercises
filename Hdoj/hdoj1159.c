/*===========================================================================
 #
 #       Filename: hdoj1159.c
 #
 #         Author: fearHuang  - huangguoyoung@gmail.com
 #         Create: 2016-12-26 16:31:39
 #  Last modified: 2016-12-26 16:31
 #    Description:
 ===========================================================================*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int LCS(char *str1,int len1,char *str2,int len2)
{
    int len=0,i,j;
    int c[len1+1][len2+1];
    for(i=1;i<=len1;++i)
        c[i][0]=0;
    for(i=1;i<=len2;++i)
        c[0][i]=0;
    c[0][0]=0;
    for(i=1;i<=len1;++i)
        for(j=1;j<=len2;++j)
        {
            if(str1[i-1]==str2[j-1])
            {
                c[i][j]=c[i-1][j-1]+1;
                if(len<c[i][j])
                    len=c[i][j];
            }
            else if(c[i-1][j]<c[i][j-1])
                c[i][j]=c[i][j-1];
            else
                c[i][j]=c[i-1][j];
        }
    return len;
}

int main()
{
    char str1[1000],str2[1000];
    while(~scanf("%s%s",str1,str2))
    {
        int len1=(int)strlen(str1);
        int len2=(int)strlen(str2);
        printf("%d\n",LCS(str1,len1,str2,len2));
    }
    return 0;
}

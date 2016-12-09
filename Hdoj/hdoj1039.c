/*===========================================================================
 #
 #       Filename: hdoj1039.c
 #
 #         Author: fearHuang  - huangguoyoung@gmail.com
 #         Create: 2016-12-09 13:44:45
 #  Last modified: 2016-12-09 13:44
 #    Description:
 ===========================================================================*/
#include<stdio.h>
#include<string.h>
int main()
{
    int flag,a,b,i,k;
    char s[21];
    while(scanf("%s",s))
    {
        if(!strcmp(s,"end"))
            break;
        flag=a=b=0;
        k=(int)strlen(s);
        for(i=0;i<k;i++)
        {
            if(s[i]=='a'||s[i]=='e'||s[i]=='o'||s[i]=='i'||s[i]=='u')
                a++,b=0,flag=1;
            else
                b++,a=0;
            if(((a==2||b==2)&&s[i-1]==s[i]&&(s[i]!='e'&&s[i]!='o'))||a==3||b==3)
                break;
        }
        if(flag&&i==k)
            printf("<%s> is acceptable.\n",s);
        else
            printf("<%s> is not acceptable.\n",s);
    }
    return 0;
}

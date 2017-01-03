/*===========================================================================
#
#       Filename: hdoj1048.c
#
#         Author: fearHuang  - huangguoyoung@gmail.com
#         Create: 2016-12-22 15:44:38
#  Last modified: 2016-12-22 15:44
#    Description: 
===========================================================================*/
#include <stdio.h>
#include <string.h>
int main()
{
    int i,n;char str[500];
    while(gets(str)){
        if(strcmp(str,"START")==0)continue;
        if(strcmp(str,"END")==0)continue;
        if(strcmp(str,"ENDOFINPUT")==0)break;
        n=(int)strlen(str);
        for(i=0;i<n;i++){
            if(str[i]>='F')
                str[i]-=5;
            else if(str[i]>='A'&&str[i]<'F')
                str[i]+=21;
            else
                str[i]=str[i];
            printf("%c",str[i]);}
        printf("\n");}
    return 0;
}

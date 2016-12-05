/*=============================================================================
 #
 #       Filename: hdoj2005.c
 #
 #         Author: fearHuang  - huangguoyoung@gmail.com
 #         Create: 2016-12-05 16:26:55
 #  Last modified: 2016-12-05 16:26
 #    Description:
 =============================================================================*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int monthday(int year,int month)
{
    int flag;
    if(!(year%400) || ((year%100)&&!(year%4)))
        flag=1;
    else
        flag=0;
    switch(month)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            return 31;
        case 4:
        case 6:
        case 9:
        case 11:
            return 30;
        case 2:
            if(flag)
                return 29;
            else
                return 28;
        default:
            return 0;
    }
}

int dayofyear(int year,int month,int day)
{
    int days;
    for(int i=1;i<month;++i)
    {
        days+=monthday(year,i);
    }
    days+=day;
    return days;
}

int main()
{
    char date[10];
    while(~scanf("%s",date))
    {
        int year,month,day;
        char *token=strtok(date,"/");
        year=atoi(token);
        token=strtok(NULL,"/");
        month=atoi(token);
        token=strtok(NULL,"/");
        day=atoi(token);
        printf("%d\n",dayofyear(year,month,day));
        memset(date,0,sizeof(char));
    }
    return 0;
}

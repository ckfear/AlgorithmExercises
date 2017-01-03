/*===========================================================================
 #
 #       Filename: hdoj1201.c
 #
 #         Author: fearHuang  - huangguoyoung@gmail.com
 #         Create: 2016-12-21 17:20:11
 #  Last modified: 2016-12-21 17:20
 #    Description:
 ===========================================================================*/
#include<stdio.h>
int leapYear(int year)
{
    if((0==year%4&&year%100)||0==year%400)
        return 1;
    return 0;
}
int main()
{
    int n,year,mon,day,i,j,count;
    scanf("%d",&n);
    for(i=0;i<n;++i)
    {
        count=0;
        scanf("%04d-%02d-%02d",&year,&mon,&day);
        if(mon==2&&day==29)
            count=-1;
        else
        {
            for(j=1;j<=17;++j)
            {
                if(leapYear(year+j))
                    count+=366;
                else
                    count+=365;
            }
            if(leapYear(year))
            {
                if(mon<=2)
                    count+=366;
                else
                    count+=365;
            }
            else if(leapYear(year+18))
            {
                if(mon<=2)
                    count+=365;
                else
                    count+=366;
            }
            else
                count+=365;
        }
        printf("%d\n",count);
    }
}

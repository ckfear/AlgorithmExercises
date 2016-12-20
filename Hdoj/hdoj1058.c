/*===========================================================================
 #
 #       Filename: hdoj1058.c
 #
 #         Author: fearHuang  - huangguoyoung@gmail.com
 #         Create: 2016-12-14 14:40:50
 #  Last modified: 2016-12-14 14:40
 #    Description:
 ===========================================================================*/
#include<stdio.h>
int main()
{
    int record[6000],n,num,p2,p3,p5,p7;
    record[1]=1;
    p2=p3=p5=p7=1;
    for(int i=2;i<=5842;++i)
    {
        while(record[p2]*2<=record[i-1]) p2++;
        while(record[p3]*3<=record[i-1]) p3++;
        while(record[p5]*5<=record[i-1]) p5++;
        while(record[p7]*7<=record[i-1]) p7++;
        num=record[p2]*2;
        if(record[p3]*3<num) num=record[p3]*3;
        if(record[p5]*5<num) num=record[p5]*5;
        if(record[p7]*7<num) num=record[p7]*7;
        record[i]=num;
    }
    while(~scanf("%d",&n)&&n)
    {
        printf("The ");
        int suf_num=n%10;
        int ten_num=n%100/10;
        if(ten_num==1)
            printf("%dth",n);
        else
            if(suf_num==1)
                printf("%dst",n);
            else if(suf_num==2)
                printf("%dnd",n);
            else if(suf_num==3)
                printf("%drd",n);
            else
                printf("%dth",n);
        printf(" humble number is %d.\n",record[n]);
    }
}

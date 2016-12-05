/*=============================================================================
 #
 #       Filename: hdoj2000.c
 #
 #         Author: fearHuang  - huangguoyoung@gmail.com
 #         Create: 2016-12-05 16:09:20
 #  Last modified: 2016-12-05 16:09
 #    Description:
 =============================================================================*/
#include<stdio.h>
int main()
{
    char ch[3];
    while(~scanf("%c%c%c",&ch[0],&ch[1],&ch[2]))
    {
        for(int i=0;i<3;++i)
        {
            for(int j=i;j<3;++j)
                if(ch[i]>ch[j])
                {
                    char temp=ch[i];
                    ch[i]=ch[j];
                    ch[j]=temp;
                }
        }
        for(int i=0;i<3;++i)
        {
            printf("%c",ch[i]);
            if(i==2)
                printf("\n");
            else
                printf(" ");
        }
        getchar();
    }
}

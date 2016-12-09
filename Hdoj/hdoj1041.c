/*===========================================================================
 #
 #       Filename: hdoj1041.c
 #
 #         Author: fearHuang  - huangguoyoung@gmail.com
 #         Create: 2016-12-09 15:12:17
 #  Last modified: 2016-12-09 15:12
 #    Description: 根据题目已给条件0->10,1->01，推导
 0->10,
 1->01,
 00->1010,
 01->1001,
 10->0110,
 11->0101,
 假设a[i]为第i个00的对数，我们目的是为了求出00的对数，
 00只会有01生成，而01只会由1和00生成，00的数目为a[i-2]，
 1的个数为2^(i-1),所以
 a[i]=2^(i-3)+a[i-2].
 a[i-1]=2^(i-4)+a[i-3]
 a[i-1]+a[i-2]=a[i]-2^(i-4)+a[i-3];
 ===========================================================================*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char* add(char a[1001],char b[1001])
{
    char *ret;
    ret=(char *)malloc(sizeof(char)*1001);
    int len_a=(int)strlen(a);
    int len_b=(int)strlen(b);
    if(len_a>len_b)
    {
        memcpy(ret,a,sizeof(char)*1001);
        memcpy(a,b,sizeof(char)*1001);
        memcpy(b,ret,sizeof(char)*1001);
        int temp=len_a;
        len_a=len_b;
        len_b=temp;
    }
    memset(ret,0,sizeof(char)*1001);
    int len=len_a>len_b?len_a:len_b;
    for(int i=0;i<len;++i)
    {
        if(i>len_a)
            ret[i]=b[i];
        else
            ret[i]+=a[i]+b[i]-'0';
        if(ret[i]-'0'>=10)
        {
            ret[i]-=10;
            if(ret[i+1]>='0'&&ret[i+1]<='9')
                ret[i+1]+=1;
            else
                if (i==len-1)
                    ret[i+1]='0'+1;
                else
                    ret[i+1]+=1;
        }
    }
    return ret;
}

int main()
{
    char a[1001][1001];
    memcpy(a[1],"0",sizeof(char)*1001);
    memcpy(a[2],"1",sizeof(char)*1001);
    memcpy(a[3],"1",sizeof(char)*1001);
    memcpy(a[4],"3",sizeof(char)*1001);
    memcpy(a[5],"5",sizeof(char)*1001);
    for(int i=6;i<=1000;++i)
    {
        // a[i]=a[i-1]+2*a[i-2];
        memcpy(a[i],add(a[i-1],add(a[i-2],a[i-2])),sizeof(char)*1001);
    }
    int n;
    while(~scanf("%d",&n))
    {
        for(int i=(int)strlen(a[n])-1;i>=0;--i)
            printf("%c",a[n][i]);
        printf("\n");
    }
}

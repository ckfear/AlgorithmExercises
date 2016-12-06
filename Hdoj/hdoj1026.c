/*=============================================================================
#
#       Filename: hdoj1026.c
#
#         Author: fearHuang  - huangguoyoung@gmail.com
#         Create: 2016-12-06 16:43:59
#  Last modified: 2016-12-06 16:43
#    Description: 
=============================================================================*/
#include<stdio.h>
#include<string.h>
struct Route{
    int x,y;
}R[10000],Temp[10000];
char P[101][101];
int N,M,min,flag;
void dp(int x,int y,int t,int n)
{
    Temp[n].x=x;
    Temp[n].y=y;
    if(x<0||x>M||y<0||y>N||P[y][x]=='X')
        return;
    if(P[y][x]=='.')
        t++;
    else
        t+=P[y][x]-'0';
    if(x==M-1&&y==N-1)
    {
        if(t<min||!flag)
        {
            min=t;
            flag=1;
            memcpy(R,Temp,sizeof(struct Route));
            return;
        }
    }
    n++;
    dp(x,y-1,t,n); //top
    dp(x-1,y,t,n); //left
    dp(x,y+1,t,n); //bottom
    dp(x+1,y,t,n); //right
}

int main()
{
    int N,M,i,j;
    while(~scanf("%d%d",&N,&M))
    {
        memset(P,0,sizeof(char));
        for(i=0;i<N;++i)
            for(j=0;j<M;++j)
                scanf("%c",&P[i][j]);

    }
}

/*===========================================================================
 #
 #       Filename: hdoj1035.c
 #
 #         Author: fearHuang  - huangguoyoung@gmail.com
 #         Create: 2016-12-08 14:56:19
 #  Last modified: 2016-12-08 14:56
 #    Description:
 ===========================================================================*/
#include<stdio.h>
#include<string.h>
struct point{
    int x;
    int y;
}O[100];
int main()
{
    int n,m,k,i,j,B[10][10],x,y,count;
    char P[10][10];
    while(~scanf("%d%d",&n,&m)&&!(!n&&!m))
    {
        scanf("%d",&k);
        for(i=0;i<10;++i)
            for (j=0;j<10;++j)
                B[i][j]=0;
        for(i=0;i<n;++i)
        {
            getchar();
            for(j=0;j<m;++j)
                scanf("%c",&P[i][j]);
        }
        x=k-1;
        y=0;
        count=0;
        O[0].x=x;
        O[0].y=y;
        while(1)
        {
            if(x<0||x>=m||y<0||y>=n)
            {
                printf("%d step",count);
//                if(count>1)
                printf("(s)");
                printf(" to exit\n");
                break;
            }
            if(B[y][x])
            {
                for(i=0;i<count;++i)
                {
                    if(O[i].x==x&&O[i].y==y)
                        break;
                }
                printf("%d step",i);
//                if(i>1)
                printf("(s)");
                printf(" before a loop of %d step",count-i);
//                if(count-i>1)
                printf("(s)");
                printf("\n");
                break;
            }
            B[y][x]=1;
            switch(P[y][x])
            {
                case 'N':
                    y--;
                    break;
                case 'W':
                    x--;
                    break;
                case 'S':
                    y++;
                    break;
                case 'E':
                    x++;
                    break;
                default:
                    break;
            }
            O[++count].x=x;
            O[count].y=y;
        }
    }
}

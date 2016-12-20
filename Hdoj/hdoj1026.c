#pragma mark - hdoj1026
/*=============================================================================
 #
 #       Filename: hdoj1026.c
 #
 #         Author: fearHuang  - huangguoyoung@gmail.com
 #         Create: 2016-12-06 16:43:59
 #  Last modified: 2016-12-06 16:43
 #    Description: BFS
 =============================================================================*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define bool int
#define true 1
#define false 0
typedef struct {
    int x;
    int y;
    int ntime;
    int s;
}elem;

int n,m,head,tail;
elem d[1000000];
char maps[110][110];
bool visited[110][110];
int direc[4][2]={{1,0},{0,1},{-1,0},{0,-1}};
int min;

void enq(elem e)
{
    d[tail]=e;
    tail++;
}

int deq()
{
    int key=head;
    head++;
    return key;
}

int cmp(const void *a,const void *b)
{
    return (*(elem *)a).ntime-(*(elem *)b).ntime;
}

bool bfs()
{
    int i;
    elem now;
    now.x=0; now.y=0; now.ntime=1; now.s=-1;
    head=tail=0;
    enq(now);
    visited[now.x][now.y]=true;
    while(head<tail){
        for(i=0;i<4;i++){//printf("%d %d\n",now.x,now.y)
            now.x=d[head].x+direc[i][0];
            now.y=d[head].y+direc[i][1];
            now.ntime=d[head].ntime;
            now.s=head;
            now.ntime++;
            if(now.x>=0 && now.x<n && now.y>=0 && now.y<m && !visited[now.x][now.y]){
                if(now.x==n - 1 && now.y==m-1)
                {
                    if(maps[now.x][now.y]!='.')
                    {
                        now.ntime+=maps[now.x][now.y]-'0';
                    }
                    min=tail;
                    enq(now);
                    return true;
                }
                if(maps[now.x][now.y]=='.') ;
                else now.ntime+=maps[now.x][now.y]-'0';
                enq(now);
                visited[now.x][now.y]=true;
            }
        }
        head++;
        qsort(&d[head],tail-head,sizeof(elem),cmp);
    }
    return false;
}

void prin1(int k)
{
    int p;
    int i;
    p=d[k].s;
    if(p==-1)
    {
        printf("It takes %d seconds to reach the target position, let me show you the way.\n",d[min].ntime-1);
        return;
    }
    prin1(p);
    printf("%ds:(%d,%d)->(%d,%d)\n",d[p].ntime,d[p].x,d[p].y,d[k].x,d[k].y);
    if(maps[d[k].x][d[k].y]!='.'){
        for(i=d[p].ntime+1;i<d[k].ntime;i++){
            printf("%ds:FIGHT AT (%d,%d)\n",i,d[k].x,d[k].y);
        }
    }
    if(k==min) printf("FINISH\n");
}

void prin2()
{
    printf("God please help our poor hero.\nFINISH\n");
}

int main()
{
    int i,j;
    while(~scanf("%d %d",&n,&m)){
        
        memset(visited,0,sizeof(visited));
        for(i=0;i<n;i++)
        {
            getchar();
            for(j=0;j<m;j++)
            {
                scanf("%c",&maps[i][j]);
                if(maps[i][j]=='X')
                {
                    visited[i][j]=true;
                }
            }
        }
        if(bfs())
            prin1(min);
        else
            prin2();
    }
    return 0;
}

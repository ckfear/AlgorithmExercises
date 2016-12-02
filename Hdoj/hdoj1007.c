/****
 *分治求最近点
 *过不了。。。我看不出来错误
 *
 *
 */
// hdoj1007
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#define SIZE 100100
typedef struct{
    double x;
    double y;
}Point;
Point P[SIZE],TEMP[SIZE];
int N;

int compX(const void*a,const void*b)
{
    Point p1=*(Point*)a;
    Point p2=*(Point*)b;
    if(p1.x==p2.x)
        return p1.y<p2.y;
    else
        return p1.x<p2.x;
}

int compY(const void*a,const void*b)
{
    Point p1=*(Point*)a;
    Point p2=*(Point*)b;
    if (p1.y==p2.y)
        return p1.x<p2.x;
    else
        return p1.y<p2.y;
}

double mindis(double a,double b)
{
    if(a<b)
        return a;
    else
        return b;
}
double dis(Point p1,Point p2)
{
    return pow(pow(p2.y-p1.y,2)+pow(p2.x-p1.x,2),0.5);
}

double divide(int left,int right)
{
    int len=right-left;
    if(len==1)
        return dis(P[left],P[right]);
    if(len==2)
        return mindis(mindis(dis(P[left],P[left+1]),dis(P[left+1],P[right])),dis(P[left],P[right]));
    int center=(right+left)/2;
    double lrmin=mindis(divide(left,center),divide(center+1,right));
    int lrnum=0;
    double lb=P[center].x-lrmin;
    double rb=P[center].x+lrmin;
    memset(TEMP, 0, sizeof(Point));
    for(int i=left;i<=right;i++)
        if(P[i].x>=lb && P[i].x<=rb)
            TEMP[lrnum++]=P[i];
    qsort(TEMP,lrnum,sizeof(Point),compY);
    for(int i=0;i<lrnum;i++)
        for(int j=i+1,num=0;j<lrnum&&num<7;num++,j++)
            if (dis(P[i],P[j])<lrmin)
                lrmin = dis(P[i], P[j]);
            else
                break;
    return lrmin;
}

int main()
{
    while(~scanf("%d",&N)&&N>=2)
    {
        for(int i=0;i<SIZE;i++)
        {
            P[i].x=0;
            P[i].y=0;
        }
        for(int i=0;i<N;i++)
            scanf("%lf %lf",&P[i].x,&P[i].y);
        qsort(P, N, sizeof(Point), compX);
        printf("%.2lf\n",divide(0, N-1)/2);
    }
    return 0;
}

// hdoj1006
/*
 * 秒针的速度6°/s 分针1/10°/s 时针是1/120°/s
 * 相对速度s_m=59/10°/s，s_h=719/120°/s，m_h=11/120°/s
 * 相差1°所需的时间分别为t_sm=10/59s,t_sh=120/719s,t_mh=120/11s
 * 差360°的周期为T_sm=3600/59s，T_sh=43200/719s，T_mh=43200/11s
 */

#include<stdio.h>
double max(double a,double b,double c){
    return a>b?(a>c?a:c):(b>c?b:c);}
double min(double a,double b,double c){
    return a<b?(a<c?a:c):(b<c?b:c);}
int main()
{
    double d;//输入角度
    double t_sm=10./59, t_sh=120./719, t_mh=120./11;
    double T_sm=3600./59, T_sh=43200./719, T_mh=43200./11;
    double sum;//满足条件的时间总和
    double happy_start,happy_end;//开始happy和结束happy的时刻
    double d_sm,d_sh,d_mh,not_d_sm,not_d_sh,not_d_mh; //相差d°分别开始的时刻和结束的时刻
    while(~scanf("%lf",&d) && d!=-1)
    {
        sum=0;
        d_sm=t_sm*d;    not_d_sm=T_sm-d_sm;
        d_sh=t_sh*d;    not_d_sh=T_sh-d_sh;
        d_mh=t_mh*d;    not_d_mh=T_mh-d_mh;
        happy_start=max(d_sm,d_sh,d_mh);
        happy_end=min(not_d_sm,not_d_sh,not_d_mh);
        while(happy_start<=43200 && happy_end<=43200)
        {
            happy_start=max(d_sm,d_sh,d_mh);
            happy_end=min(not_d_sm,not_d_sh,not_d_mh);
            if(happy_start<happy_end)  //如果happy_end比happy_start大就累加到sum上
                sum+=happy_end-happy_start;
            if(happy_end==not_d_sm)       // happy最先结束的时针需要前进一个周期
            {
                d_sm+=T_sm;
                not_d_sm+=T_sm;
            }
            else if(happy_end==not_d_sh)
            {
                d_sh+=T_sh;
                not_d_sh+=T_sh;
            }
            else if(happy_end==not_d_mh)
            {
                d_mh+=T_mh;
                not_d_mh+=T_mh;
            }
        }
        printf("%.3lf\n",sum/43200*100);
    }
}

/*===========================================================================
 #
 #       Filename: hdoj1036.c
 #
 #         Author: fearHuang  - huangguoyoung@gmail.com
 #         Create: 2016-12-09 10:34:04
 #  Last modified: 2016-12-09 10:34
 #    Description:
 ===========================================================================*/
#include <stdio.h>
#include <math.h>
#include <string.h>
#define bool int
#define true 1
#define false 0
int main()
{
    char s[10];
    int n,H,MM,SS,T;
    double dist,tot,ave;
    scanf("%d%lf",&n,&dist);
    while(~scanf("%d",&T))
    {
        tot = 0.0;
        bool flag = true;
        for(int i = 0;i < n;i++)
        {
            scanf("%s",s);
            if(!strcmp(s,"-:--:--")){
                flag = false;
            }else
            {
                sscanf(s,"%d:%d:%d",&H,&MM,&SS);
                tot += H*3600.0 + MM*60.0 + SS*1.0;
            }
        }
        if(flag == false){
            printf("%3d: -\n",T);
        }else
        {
            ave = tot / dist;
            int ans = floor(ave+0.5);
            printf("%3d: %d:%02d min/km\n",T,ans/60,ans%60);
        }
    }
    return 0;
}

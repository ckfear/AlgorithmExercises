/*=============================================================================
#
#       Filename: hdoj1033.c
#
#         Author: fearHuang  - huangguoyoung@gmail.com
#         Create: 2016-12-08 09:56:50
#  Last modified: 2016-12-08 09:56
#    Description: 在纸上画线....模拟初始点为x=310（竖） y=420（横） 初始方向是向下从初始点开始判断是顺时针拐（A）还是逆时针拐（V） 走一步后变更当前方向（flag 1=下 2=左 3=上 4=右）走前的方向 和 拐的方向 影响 走后方向（8种情况）每走一次输出x y line to
=============================================================================*/
# include <stdio.h>
int main()
{
	char s[205];

	while(scanf("%s", s) != EOF)
	{
		int flag = 1;
		int x = 310, y = 420;
		printf("300 420 moveto\n");
		printf("310 420 lineto\n");

		for(int i = 0; s[i] != '\0'; i++)
		{
			if(s[i] == 'A')
			{
				switch(flag)
				{
					case 1:
						y -= 10;
						flag = 2;
						break;
					case 2:
						x -= 10;
						flag = 3;
						break;
					case 3:
						y += 10;
						flag = 4;
						break;
					case 4:
						x += 10;
						flag = 1;
				}
				printf("%d %d lineto\n", x, y);
			}
			else
			{
				switch(flag)
				{
					case 1:
						y += 10;
						flag = 4;
						break;
					case 2:
						x += 10;
						flag = 1;
						break;
					case 3:
						y -= 10;
						flag = 2;
						break;
					case 4:
						x -= 10;
						flag = 3;
				}
				printf("%d %d lineto\n", x, y);
			}
		}
		printf("stroke\n");
		printf("showpage\n");
	}

	return 0;
}

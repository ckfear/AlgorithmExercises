// acm100061
#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    int a[10][4] = {{0,0,0,0},
        {1,1,1,1},
        {2,4,8,6},
        {3,9,7,1},
        {4,6,4,6},
        {5,5,5,5},
        {6,6,6,6},
        {7,9,3,1},
        {8,4,2,6},
        {9,1,9,1}
    };
    int n=0;
    if (~scanf("%d", &n))
    {
        for (int i=0; i<n; i++)
        {
            int num=0;
            scanf("%d", &num);
            int x = num%10;
            int y = (num-1)%4;
            printf("%d\n", a[x][y]);
        }
    }
}

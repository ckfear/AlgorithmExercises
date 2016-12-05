/*=============================================================================
#
# Author: fearHuang  - huangguoyoung@gmail.com
#
# QQ : 243820526
#
# Last modified: 2016-12-05 12:52
#
# Filename: hdoj1024.c
#
# Description: 
# hdoj1024
# 本题是最大m子线段求和的问题
# 序列总长为n，子线段数目为m,序列为a[]
# 状态转移方程为dp[i,j]=max{dp[i,j-1]+a[j],dp[i-1,k]+a[j]}
# target[m,n]=max{dp[m,j]},m<=j<=n
# 因为可能出现两种情况：1.a[j]是和前面结合的子线段。2.a[j]是单独的子线段
# 限制条件i-1<=k<=j-1,1<=j<=n
# 用cur[j]表示当前阶段的最大值即cur[i,j-1]+a[j]
# 用pre[j]表示上一阶段的最大值即max{cur[i-1,k]+a[j]}
#
=============================================================================*/

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int MaxSum(int * data, int m, int n){
    int i, j, max_sum;
    int * cur = (int *)calloc(n + 1, sizeof(int));
    int * pre = (int *)calloc(n + 1, sizeof(int));
    data = data - 1;  //data下标从0开始， cur、pre下标从1开始，为使下标一致，data减1
    for (i = 1; i <= m; ++i){
        max_sum = INT_MIN;
        for (j = i; j <= n; ++j){
            if (cur[j - 1] < pre[j - 1])
                cur[j] = pre[j - 1] + data[j];
            else
                cur[j] = cur[j - 1] + data[j];
            pre[j - 1] = max_sum;
            if (max_sum < cur[j])
                max_sum = cur[j];
        }
        pre[j - 1] = max_sum;
    }
    free(cur);
    free(pre);
    return max_sum;
}

int main(void){
    int m, n, i, *data;
    while (scanf("%d%d", &m, &n) != EOF){
        data = (int *)malloc(sizeof(int) * n);
        for (i=0; i<n; ++i){
            scanf("%d", &data[i]);
        }
        printf ("%d\n", MaxSum(data, m, n));
        free(data);
    }
    
    return 0;
}

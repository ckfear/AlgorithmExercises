/*===========================================================================
 #
 #       Filename: hdoj1034.c
 #
 #         Author: fearHuang  - huangguoyoung@gmail.com
 #         Create: 2016-12-08 10:26:42
 #  Last modified: 2016-12-08 10:26
 #    Description:
 ===========================================================================*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int N,M,i,count,flag;
    while(~scanf("%d",&N)&&N)
    {
        int *A,*B;
        A=(int *)malloc(sizeof(int)*N);
        B=(int *)malloc(sizeof(int)*N);
        for(i=0;i<N;++i)
            scanf("%d",&A[i]);
        memcpy(B,A,sizeof(int)*N);
        M=0;
        flag=0;
        count=0;
        while(!flag)
        {
            flag=1;
            count++;
            for(i=1;i<N;++i)
                A[i]=A[i]/2+B[i-1]/2;
            A[0]/=2;
            A[0]+=B[N-1]/2;
            for(i=0;i<N;++i)
            {
                if(A[i]%2)
                    A[i]++;
            }
            for(i=1;i<N;++i)
                if(A[i]!=A[0])
                    flag=0;
            M=A[0];
            memcpy(B,A,sizeof(int)*N);
        }
        free(A);
        free(B);
        printf("%d %d\n",count,M);
    }
}

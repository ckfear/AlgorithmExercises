#include<stdio.h>
int main()
{
    char in[12],out[12],stack[20];
    int n,i,j,k,top,flag[20];
    while(scanf("%d %s %s",&n,in,out)!=EOF)
    {
        top=1;
        i=j=k=0;
        while(i<n&&j<n+1)           //进栈时j++，出栈时i++,先进栈后出栈，进栈完毕后任不能结束，故j<n+1
        {
            if(out[i]==stack[top-1]&&top!=1)
            {
                i++,top--;              //出栈
                flag[k++]=0;
            }
            else
            {
                stack[top]=in[j];      //进栈
                j++,top++;
                flag[k++]=1;
            }
        }
        if(k==2*n)
        {
            printf("Yes.\n");
            for(i=0; i<k; i++)
            {
                if(flag[i])
                    printf("in\n");
                else
                    printf("out\n");
            }
        }
        else
        {
            printf("No.\n");
        }
        printf("FINISH\n");
    }
    return 0;
}


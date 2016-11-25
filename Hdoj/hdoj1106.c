// acm100106.c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int compare(const void *a, const void *b)
{
    if (*(long long*)b-*(long long*)a>0) {
        return 1;
    } else if (*(long long*)b-*(long long*)a<0){
        return -1;
    } else {
        return 0;
    }
}

int main()
{
    char s[1010];
    long long buf[1010];
    while(~scanf("%s",s))
    {
        int i=0;
        char *token=strtok(s,"5");
        while(token!=NULL)
        {
            buf[i++]=atoll(token);
            token=strtok(NULL,"5");
        }
        qsort(buf, i, sizeof(long long), compare);
        for (i=i-1;i>=0;i--)
        {
            if(i==0)
                printf("%lld\n", buf[0]);
            else
                printf("%lld ", buf[i]);
        }
    }
    return 0;
}

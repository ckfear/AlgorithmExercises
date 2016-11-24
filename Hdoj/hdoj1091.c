// acm100091.c
int main()
{
    int m,n;
    while(~scanf("%d %d", &m,&n))
    {
        if (0==m && 0==n) {
            continue;
        }
        printf("%d\n", m+n);
    }
}

// hdoj1014
#include <stdio.h>
int main()
{
    int step, mod, seek, res, i;
    while (scanf("%d %d", &step, &mod) != EOF) {
        res = 1;
        seek = 0;
        for (i = 1; i <= mod; i++) {
            seek = (seek+step)%mod;
            if (seek == 0) {
                if (i != mod)
                    res = 0;
                break;
            }
        }
        if (res)
            printf("%10d%10d    Good Choice\n\n", step, mod);
        else
            printf("%10d%10d    Bad Choice\n\n", step, mod);
    }
    return 0;
}

#include <stdio.h>

int k, l, fp1, fp2;

int main()
{
    printf("Wwedite dwa 4isla 4erez probel\n");
    scanf("%d %d", &k, &l);
    if (k>l)
    {
        fp1 = k;
        fp2 = l;
    }
    else if (l>k)
    {
        fp1 = l;
        fp2 = k;
    }
    
    
    printf("%d %d ", fp2, fp1);

    
    return 0;
}

#include <stdio.h>

int main()
{
    int k;
    printf("Wwedite zelye 4isla - 0 zawershi\n");
    while (1)
    {
        scanf("%d ", &k);
        if (k == 0)
        {
        break;
        }
        if (k % 2 != 0)
        {
        printf("%d ", k);
        }
    }
    return 0;
}

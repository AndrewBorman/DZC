#include <stdio.h>

int n, factor=1;
int factorial(int n)
    {
    for (int i = 1; i <= n; i++)
    {
    factor = factor * i;
    }
    //printf("%d\n", factor);
    return factor;
    }

int main()
{
    printf("Wwedite 4islo ne bolshe 20 \n");
    scanf("%d", &n);
    printf("factorial %d  =  %d", n, factorial(n));
    return 0;
}

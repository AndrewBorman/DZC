#include <stdio.h>

int n, l, sumin;
int sum(int n, int l)
    {
    for (int i = n; i <= l; i++)
    {
    sumin = sumin + i;
    }
    return sumin;
    }

int main()
{
    printf("Wwedite dwa 4isla \n");
    scanf("%d %d", &n, &l);
    printf("summa 4isel ot %d do %d  =  %d", n, l, sum(n,l));
    return 0;
}

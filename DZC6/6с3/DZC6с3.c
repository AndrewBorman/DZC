#include <stdio.h>

int n, l;
int middle(int n, int l)
{
    return (n+l)/2;
    
    }

int main()
{
    printf("Wwedite dwa 4isla \n");
    scanf("%d %d", &n, &l);
    printf("srednee arifmeti4eskoe =  %d", middle(n,l));
    
    return 0;
}

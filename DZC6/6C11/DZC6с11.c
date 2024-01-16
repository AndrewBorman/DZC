#include <stdio.h>

int n, l, nod1;
int nod(int n, int l)
    {
    while (l!=0)
    {
     nod1 = n % l;
     n = l;
     l = nod1;    
     }
    return n;
    }

int main()
{
    printf("Wwedite dwa 4isla \n");
    scanf("%d %d", &n, &l);
    printf("naibolshij obs4ij delitel %d  %d  =  %d", n, l, nod(n,l));
    return 0;
}

#include <stdio.h>

int k, l, m, max=0;

int main()
{
    printf("Wwedite 3 4isla 4erez probel \n");
    scanf("%d %d %d", &k, &l, &m);
    
          
    if (k>l)
    {
        max = k;
     }
    if (l>max)
    {
        max = l;
    }
    if (m>max)
    {
        max = m;
    }
    
    
    printf("Max is %d\n", max);

    
    return 0;
}

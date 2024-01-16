#include <stdio.h>

int k, l, m, n, o, max, min, sum;

int main()
{
    printf("Wwedite 5 4isel 4erez probel\n");
    scanf("%d %d %d %d %d", &k, &l, &m, &n, &o);
 
    ///////////////////////max   
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
    if (n>max)
    {
        max = n;
    }
    if (o>max)
    {
        max = o;
    }
    //////////////////////////min
         min = k;
     if (l<min)
    {
        min = l;
    }
    if (m<min)
    {
        min = m;
    }
    if (n<min)
    {
        min = n;
    }
    if (o<min)
    {
        min = o;
    }
      
    
    sum = max + min;
    
    printf("Summa max i nmin is %d\n", sum);

    
    return 0;
}

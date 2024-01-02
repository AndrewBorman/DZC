#include <stdio.h>

int k, l, m, n, o, max, min, sum;

int main()
{
    printf("Wwedite 5 4isel 4erez probel\n");
    scanf("%d %d %d %d %d", &k, &l, &m, &n, &o);
 
    ///////////////////////max   
    max = k > l ? k : l;
    max = max > m ? max: m;
    max = max > n ? max: n;
    max = max > o ? max: o;
    //////////////////////////min
    min = k;
    min = min < l ? min: l;
    min = min < m ? min: m;
    min = min < n ? min: n;
    min = min < o ? min: o;
    
      
    
    sum = max + min;
    
    printf("MAX is %d\n", max);
    printf("MIN is %d\n", min);
    printf("Summa max i min is %d\n", sum);

    
    return 0;
}

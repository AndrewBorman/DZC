#include <stdio.h>

int k, l, m, n, o, max;

int main()
{
    printf("Wwedite 5 4isel 4erez probel\n");
    scanf("%d %d %d %d %d", &k, &l, &m, &n, &o);
 
    ///////////////////////max   
    max = k > l ? k : l;
    max = max > m ? max: m;
    max = max > n ? max: n;
    max = max > o ? max: o;
    
    printf("MAX is %d\n", max);


    
    return 0;
}

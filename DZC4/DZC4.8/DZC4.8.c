#include <stdio.h>

int k, l, m, n, o, min;

int main()
{
    printf("Wwedite 5 4isel 4erez probel\n");
    scanf("%d %d %d %d %d", &k, &l, &m, &n, &o);
 

    //////////////////////////min
    min = k;
    min = min < l ? min: l;
    min = min < m ? min: m;
    min = min < n ? min: n;
    min = min < o ? min: o;
    
    printf("MIN is %d\n", min);
        
    return 0;
}

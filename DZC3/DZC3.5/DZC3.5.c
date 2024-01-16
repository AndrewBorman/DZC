#include <stdio.h>

int k, d1, d2, d3, l;


int main()
{
    printf("Wwedite 3-znachnoe 4islo\n");
    scanf("%d", &k);
    d1 = k / 100;
    d2 = (k / 10) %10;
    d3 = k %10;
    
    l = d1 * d2 * d3;
    printf("%d \n", l);
      
    return 0;
}
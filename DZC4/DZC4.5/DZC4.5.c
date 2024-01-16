#include <stdio.h>

int x11, y11, x22, y22;
float k, b;

int main()
{
    printf("Wwedite 4 4isla 4erez probel\n");
    scanf("%d %d %d %d", &x11, &y11, &x22, &y22);
    k = (float)(y22-y11)/(float)(x22-x11);
    b = (float)(y11 - k*x11);
    
 
     printf("k = %.2f  b =  %.2f\n", k, b);
    
    return 0;
}

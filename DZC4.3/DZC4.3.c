#include <stdio.h>

int k, d1, d2, d3, max=0;

int main()
{
    printf("Wwedite 3-zna4noe 4islo \n");
    scanf("%d", &k);
    
    d1 = k / 100;
    d2 = (k / 10) %10;
    d3 = k %10;
    
        
    if (d1>d2)
    {
        max = d1;
     }
    if (d2>max)
    {
        max = d2;
    }
    if (d3>max)
    {
        max = d3;
    }
    
    
    printf("Max is %d\n", max);

    
    return 0;
}

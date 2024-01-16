#include <stdio.h>

int k, l, z, sum = 0;

int main()
{
    printf("Wwedite 2 4isla po wozrastaniyu 4erez probel ne bolshe 100\n");
    scanf("%d %d", &k, &l);
    z = l-k;
    while(k<=l)
    {
     sum=sum+k*k;
     k++;    
    }
    printf("Sum kwadratov is %d\n", sum);
    return 0;
}

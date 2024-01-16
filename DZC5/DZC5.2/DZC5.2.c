#include <stdio.h>

int k, l;

int main()
{
    printf("Wwedite 4islo\n");
    scanf("%d", &k);
    l = k/100;
    if (l>=1 && l<= 9) printf("Yes - 3 simwola \n");
    if (l<1 || l> 9) printf("No - ne tri simwola \n");
    return 0;
}

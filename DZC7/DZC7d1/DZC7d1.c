#include <stdio.h>

int n, digit1=0;
int main()
{
    printf("Wwedite 4islo \n");
    scanf("%d", &n);
    while(n!=0)
    {
      digit1=n%10;
      printf("%d ", digit1);
      n = n/10;
    }
    return 0;
}

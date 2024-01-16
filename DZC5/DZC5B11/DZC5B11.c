#include <stdio.h>

int n, l = 0, digit1=0;
int main()
{
    printf("Wwedite 4islo \n");
    scanf("%d", &n);
    while(n!=0)
    {
       digit1=n%10;
      l = (l * 10) + digit1;
      n = n/10;
       
   }
     printf("%d \n", l);
     return 0;
}

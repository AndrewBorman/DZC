#include <stdio.h>

int n, l = 1, digit1=0;
int main()
{
    printf("Wwedite 4islo \n");
    scanf("%d", &n);
    while(n!=0)
    {
       digit1=n%10;
      if (digit1 % 2 != 0) { l= 0; break;}
       
          // counter++;
          // if (counter >1) break;
       n = n/10;
       
   }
      if (l == 1 ) printf("Yes\n");
          else printf("No\n");      
    return 0;
}

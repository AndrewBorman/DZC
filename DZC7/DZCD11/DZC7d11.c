#include <stdio.h>

int is2pow(int k)
{
   if (k == 1)
   {
   return 1;
   }
   else if (k % 2 == 0)
   {
   return is2pow(k / 2);
   }
   else
   {
   return 0;
   }
}

int main()
{
    int k;
    printf("Wwedite 4islo \n");
    scanf("%d", &k);

    if (is2pow(k))
    {
    printf("YES\n");
    }
    else
    {
    printf("NO\n");
    }
    return 0;
}

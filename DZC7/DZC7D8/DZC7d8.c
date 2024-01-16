#include <stdio.h>

int func(int k)
   {
   int l = 0;
   while (k != 0)
   {
   if (k % 2 == 1)
   {
   l++;
   }
   k /= 2;
   }
   return l;
   }
int main()
   {
   int k;
   printf("wwedite 4islo\n");
   scanf("%d", &k);
   int m = func(k);
   printf("Kol-wo edinic w dwoi4noj zapisi 4isla %d: %d \n", k, m);
   return 0;
   }

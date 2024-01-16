#include <stdio.h>

int n, l = 0, digit1=0;
int main()
{
    printf("Wwedite 4islo \n");
    scanf("%d", &n);
    while(n!=0)
    {
       digit1=n%10;
       n = n/10;
       if (digit1 == l) { printf("YES"); return 0; }
       l = digit1;
    }
    printf("NO");
    return 0;
}

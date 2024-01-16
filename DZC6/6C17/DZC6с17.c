#include <stdio.h>
int n;
int is_happy_number(int n)
    {
    int sum = 0;
    int p = 1;
    int d;
    while (n > 0)
    {
    d = n % 10;
    sum += d;
    p *= d;
    n /= 10;
    }
    if (sum == p) {
    return 1; 
    } else {
    return 0;  
    }
    return n;
    }
int main()
{
    printf("Wwedite 4islo \n");
    scanf("%d", &n);
    if (is_happy_number(n))
    {
    printf("Yes\n");
    }
    else 
    {
    printf("No\n");
    }
    return 0;
}

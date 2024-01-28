#include <stdio.h>

int f[5];
float sr, sum = 0;
int main()
{

    printf("Wwedite 5 4isel 4erez probel \n");
    for (int i=0; i < 5; i++) {
        scanf("%d", &f[i]);
        sum+=f[i];
    }
   sr = sum / 5;
   printf("%.3f \n", sr);
return 0;
}

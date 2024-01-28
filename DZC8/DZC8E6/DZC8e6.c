#include <stdio.h>

int f[12];
float sum = 0, sr = 0;

int main()
{

    printf("Wwedite 12 4isel 4erez probel \n");
    for (int i=0; i < 12; i++) {
        scanf("%d", &f[i]);
        sum+=f[i];   
    } 
    sr = sum / 12;
   printf("Srednee arifmeti4eskoe %.2f\n", sr);
return 0;
}

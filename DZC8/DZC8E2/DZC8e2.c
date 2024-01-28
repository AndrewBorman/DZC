#include <stdio.h>

int f[5], min = 0;

int main()
{

    printf("Wwedite 5 4isel 4erez probel \n");
    for (int i=0; i < 5; i++) {
        scanf("%d", &f[i]);
         
    }
    min = f[0];
    for (int i=0; i < 5; i++) {
            if (f[i] < min){
            min = f[i];   
            }
    }
    printf("Minimum iz 5 4isel %d\n", min);
return 0;
}

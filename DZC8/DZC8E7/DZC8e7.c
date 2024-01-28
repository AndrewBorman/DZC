#include <stdio.h>

int f[10], t[10];
float sum = 0, sr = 0;

int main()
{

    printf("Wwedite 10 4isel 4erez probel \n");
    for (int i=0; i < 10; i++) {
        scanf("%d", &f[i]);
    }
    
    for (int i = 0; i < 10; i++){
       if (i <= 4){
       t[i] = f[4-i];    
       }
       if (i > 4 && i < 10){
       t[i] = f[14-i];    
       }
    printf("%d ", t[i]);
    }
return 0;
}

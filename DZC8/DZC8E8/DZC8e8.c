#include <stdio.h>

int f[12], t[12];
float sum = 0, sr = 0;

int main()
{

    printf("Wwedite 12 4isel 4erez probel \n");
    for (int i=0; i < 12; i++) {
        scanf("%d", &f[i]);
    }
    
    for (int i = 0; i < 12; i++){
       if (i <= 3){
       t[i] = f[3-i];    
       }
       if (i >3 && i < 8){
       t[i] = f[11-i];    
       }
       if (i > 7 && i <= 11){
       t[i] = f[19-i];    
       }
       
       
    printf("%d ", t[i]);
    }
return 0;
}

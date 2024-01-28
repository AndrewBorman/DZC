#include <stdio.h>

int f[10], sum =0;

int main()
{

    printf("Wwedite 10 4isel 4erez probel \n");
    for (int i=0; i < 10; i++) {
        scanf("%d", &f[i]);
    if (f[i] > 0){
            sum+=f[i];   
            } 
         
    }
   printf("Summa polozhitelnyh 4isel %d\n", sum);
return 0;
}

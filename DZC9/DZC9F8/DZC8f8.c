#include <stdio.h>

void swap_negmax_last(int size, int a[])
{
    int negmax = -1;  
    int negmax_index = -1;  

    for (int i = 0; i < size; i++)
    {
        if (a[i] < 0 && (negmax_index == -1 || a[i] > a[negmax_index])) {
            negmax = a[i];
            negmax_index = i;
        }
    }
    
    if (negmax_index != -1)
    {
        int temp = a[size - 1];
        a[size - 1] = negmax;
        a[negmax_index] = temp;
    }
}

int main()
{
    int size;
    printf("Wwedite razmer massiva\n");
    scanf("%d", &size);

    int a[size];
    printf("Wwedite elementy massiva\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }

    swap_negmax_last(size, a);

    printf("Izmenennuj massiv \n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}

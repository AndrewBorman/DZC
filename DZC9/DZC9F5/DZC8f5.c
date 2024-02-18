#include <stdio.h>

void input_array(int size, int a[]) {
    printf("Wwedite elementy massiva 4erez probel\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &a[i]);
    }
}

void print_max(int max) {
    printf("Max element is %d\n", max);
}

int find_max_array(int size, int a[]) {
    int max = a[0];
    for (int i = 1; i < size; i++) {
        if (a[i] > max) {
            max = a[i];
        }
    }

    return max;
}

int main() {
    int size;
    printf("Wwedite razmer massiva\n");
    scanf("%d", &size);

    int array[size];
    input_array(size, array);

    int max = find_max_array(size, array);
    print_max(max);

    return 0;
}

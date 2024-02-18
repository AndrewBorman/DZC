#include <stdio.h>

void sort_even_odd(int n, int a[]) {
    int i, j;
    int temp;

    j = n - 1;
    i = 0;

    while (i < j) {
        while (a[i] % 2 == 0 && i < j) {
            i++;
        }

        while (a[j] % 2 != 0 && i < j) {
            j--;
        }

        if (i < j) {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }
}

void input_array(int n, int a[]) {
    printf("Wwedite elementy massiva\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
}

void output_array(int n, int a[]) {
    printf("Massiv posle sortirovki\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int main() {
    int n;
    printf("Wwedite razmer massiva\n");
    scanf("%d", &n);

    int a[n];
    input_array(n, a);

    sort_even_odd(n, a);

    output_array(n, a);

    return 0;
}

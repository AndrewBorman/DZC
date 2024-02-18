#include <stdio.h>

void input_array(int size, int a[]) {
    printf("Wwedite elementy massiva 4erez probel\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &a[i]);
    }
}
void print_result(int result) {
    if (result == 1) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
}
int is_two_same(int size, int a[]) {
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (a[i] == a[j]) {
                return 1;
            }
        }
    }
    return 0;
}
int main() {
    int size;
    printf("Wwedite razmer massiva\n");
    scanf("%d", &size);
    int array[size];
    input_array(size, array);
    int result = is_two_same(size, array);
    print_result(result);
    return 0;
}

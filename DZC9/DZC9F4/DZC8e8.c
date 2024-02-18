#include <stdio.h>

void count_digits(char s[], int count[]) {
     for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] >= '0' && s[i] <= '9') {
            int digit = s[i] - '0';
            count[digit]++;
        }
    }
}

void print_digit_count(int count[]) {
    for (int i = 0; i < 10; i++) {
        if (count[i] > 0) {
            printf("%d-%d ", i, count[i]);
        }
    }
}

int main() {
    char str[100];
    int count[10] = {0};

    printf("Wwedite stroku \n");
    scanf("%99[^\n]", str);

    count_digits(str, count);
    print_digit_count(count);

    return 0;
}

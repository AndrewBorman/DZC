#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define MAX_LENGTH 1000

void extract_numbers(const char* str, int* numbers, int* count)
{
    *count = 0;
    char* end;
    char* token = strtok((char*)str, " ");
    while (token != NULL)
    {
        if (isdigit(token[0]) || (token[0] == '-' && isdigit(token[1])))
        {
            numbers[*count] = strtol(token, &end, 10);
            (*count)++;
        }
        token = strtok(NULL, " ");
    }
}

int compare_int(const void* a, const void* b)
    {
        return (*(int*)a - *(int*)b);
    }

int main() {
    char str[MAX_LENGTH];
    int numbers[MAX_LENGTH];
    int count;

    FILE* file = fopen("input.txt", "r");
    if (file == NULL)
    {
        printf("Ne udalos otkryc file input.txt dlia 4teniya.\n");
        return 1;
    }
    if (fscanf(file, "%[^\n]", str) != 1)
    {
        printf("Oshibka pri 4tenii stroki iz faila.\n");
        fclose(file);
        return 1;
    }

    fclose(file);

    extract_numbers(str, numbers, &count);

    qsort(numbers, count, sizeof(int), compare_int);

    file = fopen("output.txt", "w");
    if (file == NULL)
    {
        printf("Ne udalos otkryc file output.txt dlia zapisi.\n");
        return 1;
    }

    for (int i = 0; i < count; i++)
    {
        fprintf(file, "%d ", numbers[i]);
    }
    fprintf(file, "\n");
    fclose(file);

    printf("Resultat zapisan w file output.txt\n");

    return 0;
}

#include <stdio.h>
#include <ctype.h>

#define MAX_LENGTH 10000

void count_letters(const char* str, int* lowercase_count, int* uppercase_count)
{
    *lowercase_count = 0;
    *uppercase_count = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (isalpha(str[i]))
        {
            if (islower(str[i]))
                (*lowercase_count)++;
            else if (isupper(str[i]))
                (*uppercase_count)++;
        }
    }
}

int main()
{
    char str[MAX_LENGTH];
    int lowercase_count, uppercase_count;

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

    count_letters(str, &lowercase_count, &uppercase_count);

    file = fopen("output.txt", "w");
    if (file == NULL)
    {
        printf("Ne udalos otkryc file output.txt dlia zapisi.\n");
        return 1;
    }

    fprintf(file, "%d %d\n", lowercase_count, uppercase_count);
    fclose(file);

    printf("Resultat zapisan w file output.txt\n");

    return 0;
}

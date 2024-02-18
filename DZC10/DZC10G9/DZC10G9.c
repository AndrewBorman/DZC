#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAX_LENGTH 1000

void remove_duplicates_and_spaces(char* str)
{
    int i, j;
    int len = strlen(str);
    int hash[256] = {0};

    for (i = j = 0; i < len; i++)
    {
        if (!isspace(str[i]) && hash[(unsigned char)str[i]] == 0)
        {
            hash[(unsigned char)str[i]] = 1;
            str[j++] = str[i];
        }
    }
    str[j] = '\0';
}

int main()
{
    char str[MAX_LENGTH];

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
    remove_duplicates_and_spaces(str);
    file = fopen("output.txt", "w");
    if (file == NULL)
    {
        printf("Ne udalos otkryc file output.txt dlya zapisi.\n");
        return 1;
    }

    fprintf(file, "%s\n", str);
    fclose(file);
    printf("Rezultat zapisan w file output.txt\n");
    return 0;
}

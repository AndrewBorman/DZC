#include <stdio.h>
#include <ctype.h>

#define MAX_LENGTH 1000

void replace_letters(char* str)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (islower(str[i]))
        {
            if (str[i] == 'a')
                str[i] = 'b';
            else if (str[i] == 'b')
                str[i] = 'a';
        }
        else if (isupper(str[i]))
        {
            if (str[i] == 'A')
                str[i] = 'B';
            else if (str[i] == 'B')
                str[i] = 'A';
        }
    }
}

int main()
{
    char str[MAX_LENGTH];

    FILE* file = fopen("input.txt", "r");
    if (file == NULL)
    {
        printf("Ne udalos otkryc file input.txt dlia 4tenie.\n");
        return 1;
    }

    // Чтение строки из файла
    if (fscanf(file, "%[^\n]", str) != 1)
    {
        printf("Oshibka pri 4tenii stroki iz faila.\n");
        fclose(file);
        return 1;
    }

    fclose(file);

    replace_letters(str);

    file = fopen("output.txt", "w");
    if (file == NULL)
    {
        printf("Ne udalos otkryc file output.txt dlia zapisi.\n");
        return 1;
    }

    fprintf(file, "%s\n", str);
    fclose(file);

    printf("Resultat zapisan w file output.txt\n");
    return 0;
}

#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 1000

void find_longest_word(const char* str, char* longest_word)
{
    char current_word[MAX_LENGTH];
    char max_word[MAX_LENGTH];
    int current_length = 0;
    int max_length = 0;
    int i, j;

    for (i = 0, j = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ')
        {
            current_word[j++] = str[i];
            current_length++;
        } else
        {
            current_word[j] = '\0';
            if (current_length > max_length)
            {
                max_length = current_length;
                strcpy(max_word, current_word);
            }
            j = 0;
            current_length = 0;
        }
    }

    current_word[j] = '\0';
    if (current_length > max_length)
    {
        max_length = current_length;
        strcpy(max_word, current_word);
    }

    strcpy(longest_word, max_word);
}

int main()
{
    char str[MAX_LENGTH];
    char longest_word[MAX_LENGTH];

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
    find_longest_word(str, longest_word);
    file = fopen("output.txt", "w");
    if (file == NULL)
    {
        printf("Ne udalos otkryc file output.txt dlya zapisi.\n");
        return 1;
    }
    fprintf(file, "%s\n", longest_word);
    fclose(file);
    printf("Rezultat zapisan w file output.txt\n");
    return 0;
}

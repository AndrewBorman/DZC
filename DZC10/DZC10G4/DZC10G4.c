#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_LENGTH 100

void find_unique_characters(const char* word, char* result) {
    int count[26] = {0};
    int len = strlen(word);
    for (int i = 0; i < len; i++)
    {
        count[word[i] - 'a']++;
    }
    int index = 0;
    for (int i = 0; i < len; i++)
    {
            if (count[word[i] - 'a'] == 1)
        {
            result[index++] = word[i];
        }
    }
    result[index] = '\0';
}

int main()
{
    char word1[MAX_LENGTH];
    char word2[MAX_LENGTH];

    FILE* file = fopen("input.txt", "r");
    if (file == NULL)
    {
        printf("Ne udalos otryc file input.txt dlia 4teniya.\n");
        return 1;
    }

    if (fscanf(file, "%s", word1) != 1)
    {
        printf("Oshibka pri 4tenii perwogo slowa iz faila.\n");
        fclose(file);
        return 1;
    }

    if (fscanf(file, "%s", word2) != 1)
    {
        printf("Oshibka pri 4tenii wtorogo slowa iz faila.\n");
        fclose(file);
        return 1;
    }

    fclose(file);
    char result[MAX_LENGTH];
    find_unique_characters(word1, result);
    file = fopen("output.txt", "w");
    if (file == NULL)
    {
        printf("Ne udalos otkryc file output.txt dliazapisi.\n");
        return 1;
    }

    fprintf(file, "%s\n", result);
    fclose(file);

    printf("Resultat zapisan w file output.txt\n");

    return 0;
}

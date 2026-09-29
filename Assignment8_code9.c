/* 9.	Search for a Substring
Write a C program to input a sentence and a word. Use strstr() to determine whether the word occurs in the sentence. If found, display the starting position of its first occurrence.
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char sentence[200], word[50];
    char *ptr;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    printf("Enter a word: ");
    scanf("%s", word);

    ptr = strstr(sentence, word);

    if (ptr != NULL)
    {
        printf("Word found at position %d\n", (int)(ptr - sentence + 1));
    }
    else
    {
        printf("Word not found in the sentence.\n");
    }

    return 0;
}
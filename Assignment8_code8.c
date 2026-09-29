/* 8.	Search for a Character
Write a C program to input a string and a character. Use strchr() to find the first occurrence of the character. If found, display its position; otherwise, display an appropriate message.
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], ch;
    char *ptr;

    printf("Enter a string: ");
    scanf("%s", str);

    printf("Enter character to search: ");
    scanf(" %c", &ch);

    ptr = strchr(str, ch);

    if (ptr != NULL)
    {
        printf("Character found at position %d\n", (int)(ptr - str + 1));
    }
    else
    {
        printf("Character not found in the string.\n");
    }

    return 0;
}
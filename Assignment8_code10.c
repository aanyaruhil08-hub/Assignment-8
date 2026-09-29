/* Split a Sentence into Words
Write a C program to input a sentence and separate it into individual words using strtok(). Display each word on a separate line and count the total number of words.
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char str[200];
    char *word;
    int count = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    word = strtok(str, " \n");

    while (word != NULL)
    {
        printf("%s\n", word);
        count++;

        word = strtok(NULL, " \n");
    }

    printf("Total number of words = %d\n", count);

    return 0;
}
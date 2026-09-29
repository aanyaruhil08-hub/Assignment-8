/*Character-Frequency Analysis
Write a C program to count the frequency of every character in a string. Treat uppercase and lowercase forms of a letter as the same character, and do not display the same character more than once.
*/

#include <stdio.h>

int main()
{
    char str1[200], str2[100];
    int i = 0, j = 0;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    /* Find the end of the first string */
    while (str1[i] != '\0')
    {
        i++;
    }

    /* Copy second string to the end of first string */
    while (str2[j] != '\0')
    {
        str1[i] = str2[j];
        i++;
        j++;
    }

    /* Add null character at the end */
    str1[i] = '\0';

    printf("Concatenated string: %s\n", str1);

    return 0;
}
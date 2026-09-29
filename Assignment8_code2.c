/* 2.	Manual String Copy
Write a C program to copy one string into another character array manually. Display both the original and copied strings. Do not use strcpy().
*/

#include <stdio.h>

int main()
{
    char str1[100], str2[100];
    int i = 0;

    printf("Enter a string: ");
    scanf("%s", str1);

    /* Copy string manually */
    while (str1[i] != '\0')
    {
        str2[i] = str1[i];
        i++;
    }

    /* Add null character at the end */
    str2[i] = '\0';

    printf("Original string: %s\n", str1);
    printf("Copied string: %s\n", str2);

    return 0;
}
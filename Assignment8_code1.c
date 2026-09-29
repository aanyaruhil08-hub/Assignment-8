/* Manual String Length
Write a C program to find the length of a string manually by traversing it until the null character '\0' is encountered. Do not use strlen().
*/

#include <stdio.h>

int main()
{
    char str[100];
    int i = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    while (str[i] != '\0')
    {
        i++;
    }

    printf("Length of the string = %d", i);

    return 0;
}
/* 4.	Palindrome String
Write a C program to determine whether a given string is a palindrome. Ignore differences between uppercase and lowercase letters. For example, Madam should be treated as a palindrome.
*/

#include <stdio.h>

int main()
{
    char str[100];
    int i, length = 0, palindrome = 1;
    char left, right;

    printf("Enter a string: ");
    scanf("%s", str);

    /* Find the length manually */
    while (str[length] != '\0')
    {
        length++;
    }

    /* Compare characters from both ends */
    for (i = 0; i < length / 2; i++)
    {
        left = str[i];
        right = str[length - 1 - i];

        /* Convert uppercase to lowercase */
        if (left >= 'A' && left <= 'Z')
        {
            left = left + 32;
        }

        if (right >= 'A' && right <= 'Z')
        {
            right = right + 32;
        }

        if (left != right)
        {
            palindrome = 0;
            break;
        }
    }

    if (palindrome == 1)
    {
        printf("The string is a palindrome.\n");
    }
    else
    {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}
//  Date - 23/12/2024, Author - Aman Singh

// 10. Write a function to find the repeated character in a given string.

#include <stdio.h>
void Repeatedchar(char s[])
{
    int hash[256] = {0};
    for (int i = 0; s[i] != '\0'; i++)
        hash[s[i]]++;

    for (int i = 1; i < 256; i++)
    {
        if (hash[i] > 1)
            printf("%c are repeated character\n", i);
    }
}
void main()
{
    char s[] = "amkasman";
    Repeatedchar(s);
}
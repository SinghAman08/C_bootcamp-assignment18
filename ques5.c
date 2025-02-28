//  Date - 23/12/2024, Author - Aman Singh

// 4. Write a function to transform string into lowercase.

#include <stdio.h>
void StrToUppercase(char s2[])
{
    for (int i = 0; s2[i] != '\0'; i++)
    {
        if (s2[i] >= 65 && s2[i] <= 90)
            s2[i] = s2[i] + 32;
    }
    printf("%s\n", s2);
}
void main()
{
    char s1[] = "HeLLo";
    StrToUppercase(s1);
}
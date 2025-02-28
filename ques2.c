//  Date - 23/12/2024, Author - Aman Singh

// 2. Write a function to reverse a string.

#include <stdio.h>
#include <string.h>
void ReverseS1(char st[])
{
    int length = strlen(st);
    int j = length - 1;
    for (int i = 0; i < (length / 2); i++)
    {
        char temp = st[i];
        st[i] = st[j];
        st[j] = temp;
        j--;
    }
}
void main()
{
    char s1[] = "friend";
    ReverseS1(s1);
    printf("%s\n", s1);
}
//  Date - 23/12/2024, Author - Aman Singh

// 3. Write a function to compare two strings.
#include <stdio.h>
#include <string.h>

void strcompare(char s1[], char s2[])
{
    char temp1[10], temp2[10];
    for (int i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
    {
        if (s1[i] > s2[i])
        {
            strcpy(temp1, s2);
            strcpy(temp2, s1);
        }
        else if (s1[i] < s2[i])
        {
            strcpy(temp1, s1);
            strcpy(temp2, s2);
        }
    }
    printf("According to Asscending order in dictonary first %s string than %s string", temp1, temp2);
}
void main()
{
    char s1[10], s2[10];
    printf("Enter first string: ");
    fgets(s1, sizeof(s1), stdin);
    fflush(stdin);
    printf("Enter second string: ");
    fgets(s2, sizeof(s2), stdin);
    fflush(stdin);
    printf("%s", s1);
    printf("%s", s2);

    strcompare(s1, s2);
}
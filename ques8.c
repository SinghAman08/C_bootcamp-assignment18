//  Date - 23/12/2024, Author - Aman Singh

// 8. Write a function to count words in a given string.

#include<stdio.h>
void CountWords(char s1[])
{
    int wordcout = 0;
    for(int i = 0; s1[i] != '\0'; i++)
    {
        if(s1[i] == ' ')
            wordcout++;
    }
    printf("There are %d words in == > %s\n",++wordcout,s1);
}
void main()
{
    char s[] = "Hello, this is bike.";
    CountWords(s);
}
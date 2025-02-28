//  Date - 23/12/2024, Author - Aman Singh

// 1. Write a function to calculate length of the string

#include<stdio.h>

void stringlength(char s2[])    // catching base address of s1 now s2 also update the value of s1 without we used pointer but internally complier here use pointer
{
    int length = 0;
    for(int i = 0; s2[i] != '\0'; i++)
        length++;
    
    printf("The length of string is %d\n",length);

}

void main()
{
    char s1[] = "hello how are you";
    stringlength(s1);       // stringlength(base address of s1)
    printf("%s\n",s1);
}
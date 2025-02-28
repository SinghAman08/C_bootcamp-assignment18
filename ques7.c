//  Date - 23/12/2024, Author - Aman Singh

// 7. Write a function to check whether a given string is palindrome or not.

#include<stdio.h>
#include<string.h>
void IsPalindrome(char s1[])
{
    int length = strlen(s1),j = length-1;
    char temp[6];
    strcpy(temp,s1);

    for(int i = 0; i < (length/2); i++)
    {
        char var;
        var = temp[i];
        temp[i] = temp[j];
        temp[j] = var;
        j--;
    }
    printf("temp = %s\n",temp);
    if(strcmp(temp,s1) == 0)
        printf("Yes, %s is a Palindrome\n",s1);
    else
        printf("No, %s is a not Palindrome\n",s1);

}
void main()
{
    char s[] = "naman";
    IsPalindrome(s);    
}
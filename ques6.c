//  Date - 23/12/2024, Author - Aman Singh

/* 6. Write a function to check whether a given string is an alphanumeric string or not.
(Alphanumeric string must contain at least one alphabet and one digit)*/

#include<stdio.h>
void CheakAlphanumeric(char s1[])
{
    int alpha = 0, digit = 0;
    for (int i = 0; s1[i] != '\0'; i++)
    {
        if(((s1[i] >= 65) && (s1[i] <= 90)) || ((s1[i] >= 97)&&(s1[i] <= 122)))
            alpha++;
        else if((s1[i] >= 48) && (s1[i] <= 57))
            digit++;
    }
    if((alpha > 0) && (digit > 0))
        printf("Yes, %s is an alphanumeric string\n",s1);
    else
        printf("No, %s is an alphanumeric string\n",s1);
    
}
void main()
{
    char s1[] = "info.aman";
    CheakAlphanumeric(s1);
}
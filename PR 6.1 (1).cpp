#include <stdio.h>

int main()
{
    char str[10];
    int i, length = 0, palindrome = 1;

    printf("Enter any string: ");
    scanf("%s", str);

    for(i = 0; str[i] != '\0'; i++)
    {
        length++;
    }

    for(i = 0; i < length / 2; i++)
    {
        if(str[i] != str[length - i - 1])
        {
            palindrome = 0;
            break;
        }
    }

    if(palindrome == 1)
        printf("The given string is a Palindrome.");
    else
        printf("The given string is not a Palindrome.");
        
}

/*
output

Enter any string: nayan
The given string is a Palindrome.

/*
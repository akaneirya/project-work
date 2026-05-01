#include <stdio.h>

int main() 
{
    char str[]="Hello world";
    char *ptr=str; 
    int length=0;

    while (*ptr!='\0')
	{
        length++;
        ptr++; 
    }
    printf(" your String  length is: %d\n", length);
    
}
/*

output 

your String  length is: 11

\*
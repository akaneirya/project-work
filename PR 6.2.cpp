#include <stdio.h>

void frequency(char str[])
{
    int i, j, count;
    
    for(i = 0; str[i] != '\0'; i++)
    {
        count = 1;
        
        
        for(j = 0; j < i; j++)
        {
            if(str[i] == str[j])
            break;
        }
        
        if(j < i)
        continue;
        
        
        for(j = i + 1; str[j] !='\0'; j++)
        {
            if(str[i] == str[j])
            count++;
        }
        printf("%c => %d\n", str[i], count);
    }
    }
    
    int main()
    {
        char str[10];
        printf("enter ant string: ");
        scanf("%s", str);
        frequency(str);
    }
/*
output

enter ant string: devlopment
d => 1
e => 3
v => 1
l => 1
o => 1
p => 1
m => 1
n => 1
t => 1
/*
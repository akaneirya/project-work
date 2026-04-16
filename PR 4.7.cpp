#include <cstdio>

int main() {
    int height = 5;
    int width = 5;

    for(int i = 1; i <= height; i++) {        
        for(int j = 1; j <= width; j++) {    
            
            if(i == 1 || i == 3)              
                printf("*");
            else if(j == 1)                   
                printf("*");
            else if((j == width) && (i == 2 || i == 3)) 
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}
/*
output 
*****
*   *
*****
*
*
/*
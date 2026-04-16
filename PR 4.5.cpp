#include<stdio.h>

int main() {
    
    int i, j, k;
    
    for(i = 1; i <= 5; i++) {
        
      for(j = 1; j <= 5 - i; j++) {
        printf(" ");
     }
     
     
      for(k = 6 - i; k <= 5; k++) {
      printf("%d", k);
      }
      
          for(k = 5-1; k >= 6 - i; k--){
                printf("%d", k);
      }
    printf("\n");
    }
}
/* 
output 

    5
   454
  34543
 2345432
123454321
/*
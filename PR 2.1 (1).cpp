#include<stdio.h>

int main()
{
    int score;
    char grade;

    printf("enter your score: ");
    scanf("%d", &score);

    grade = (score >= 90) ? 'A' :
            (score >= 80) ? 'B' :
            (score >= 70) ? 'C' :
            (score >= 60) ? 'D' :
            (score >= 50) ? 'E' : 'F' ;

            printf("enter your is %c\n ", grade);
            
            switch(grade){
            case 'A' :
            printf("excellent work");
            break;
            case 'B' :
            printf("best performance");
            break;
           case 'C' :
            printf("well done");
            break;
            case 'D' :
            printf("satisfy");
            break;
           case 'E' :
            printf("you failed");
            break;
            }
            if(grade >= 'A' && grade <= 'D'){
		printf("You are eligible for next level.");
}else{
		printf("Please try again next exam.");
    }
return 0;
}       
 /*
output :- enter your score (0-100):99
*/
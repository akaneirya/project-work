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

}

/*
output
1)enter your score: 92
 your is grade A
excellent workYou are eligible for next level.

2)enter your score:85
your is grade B
Best performance you are eligible for next level.
/*
 

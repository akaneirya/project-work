#include<stdio.h>

int main ()
{ 
int number = 384;
int first, last , sum;
last = number % 10;

while (number >=10){
number = number /10;
}
first = number;

sum = first + last;

printf("%d", sum);

}
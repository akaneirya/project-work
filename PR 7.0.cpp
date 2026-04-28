#include<stdio.h>

int add(int x, int y){
  return x + y;
}

int sub(int x, int y){
  return x - y;
}

int mul(int x, int y){
  return x * y;
}

int divi(int x, int y){
  return x / y;
}

int mod(int x, int y){
  return x % y;
}

int main() {
int choice, x, y;

for(;;) {
    
printf("\npress 1 for +");
printf("\npress 2 for -");
printf("\npress 3 for *");
printf("\npress 4 for /");
printf("\npress 5 for %%");
printf("\npress 0 for exit");

printf("\nenter your choice: ");
scanf("%d", &choice);

if(choice == 0){
printf("program exit...\n");
break;
}

printf("enter your first number: ");
scanf("%d", &x);

printf("enter your second number: ");
scanf("%d", &y);

switch(choice) {

case 1:
printf("addtion of %d and %d is %d\n", x, y, add(x,y));
break;

case 2:
printf("subtraction of %d and %d is %d\n", x, y, sub(x,y));
break;

case 3:
printf("multiplcation of %d and %d is %d\n", x, y, mul(x,y));
break;

case 4:
if(y != 0)
printf("division of %d and %d is %d\n", x, y, divi(x,y));
else
printf("wrong : division by zero!\n");
break;

case 5:
if(y != 0)
printf("addtion of %d and %d is %d\n", x, y, add(x,y));
else
printf("wrong : modulus by zero!\n");
break;

default:
printf("invalid choice!\n");
}
}
}

\*
output

press 1 for +
press 2 for -
press 3 for *
press 4 for /
press 5 for %
press 0 for exit
enter your choice: 1
enter your first number: 5
enter your second number: 3
addtion of 5 and 3 is 8

press 1 for +
press 2 for -
press 3 for *
press 4 for /
press 5 for %
press 0 for exit
enter your choice: 4
enter your first number: 10
enter your second number: 5
division of 10 and 5 is 2

press 1 for +
press 2 for -
press 3 for *
press 4 for /
press 5 for %
press 0 for exit
enter your choice: 0
program exit...

\*
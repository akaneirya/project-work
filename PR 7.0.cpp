#include<stdio.h>

int add(int e, int f){
  return e + f;
}

int sub(int e, int f){
  return e - f;
}

int mul(int e, int f){
  return e * f;
}

int divi(int e, int f){
  return e / f;
}

int mod(int e, int f){
  return e % f;
}

int main() {
int choice, e, f;

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
scanf("%d", &e);

printf("enter your second number: ");
scanf("%d", &f);

switch(choice) {

case 1:
printf("addtion of %d and %d is %d\n", e, f, add(e,f));
break;

case 2:
printf("subtraction of %d and %d is %d\n", e, f, sub(e,f));
break;

case 3:
printf("multiplcation of %d and %d is %d\n", e, f, mul(e,f));
break;

case 4:
if(f != 0)
printf("division of %d and %d is %d\n", e, f, divi(e,f));
else
printf("wrong : division by zero!\n");
break;

case 5:
if(f != 0)
printf("addtion of %d and %d is %d\n", e, f, add(e,f));
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

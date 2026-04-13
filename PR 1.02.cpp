#include<stdio.h>

int main()
{
	int base_salary, HRA , DA , TA , gross_salary;
	
	printf("enter the value of base salary");
	scanf("%d",&base_salary);
	
	printf("enter the value of HRA");
	scanf("%d",&HRA);
	
	printf("enter the value of DA");
	scanf("%d",&DA);
	
	printf("enter the value of TA");
	scanf("%d",&TA);

	
	gross_salary = base_salary + HRA + DA + TA;
	
	printf("gross_salary = %d\n", gross_salary);
	
}

/*
output
1)enter the value of base salary100
2)enter the value of HRA10
3)enter the value of DA5
4)enter the value of TA8
5)gross_salary = 123

/*

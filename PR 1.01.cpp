#include<stdio.h>

int main()
{
	float celcius, fahrenheit;
	
    printf("enter value of celcius");
	scanf("%f",&celcius);
	
	fahrenheit = (9.0/5.0 * celcius) + 32;
	
	printf("fahrenheit = %f/n", fahrenheit); 
}

/*

output

1)enter value of celcius38
fahrenheit = 100.400002/n

/*

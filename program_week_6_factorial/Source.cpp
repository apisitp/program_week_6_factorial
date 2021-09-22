#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int factorial (int num) 
{
	int temp=1;
	while (num>0)
	{
		temp *= num;
		num--;
	}
	return temp;
}


void main()
{
	int x;
	printf("input : ");
	scanf_s("%d", &x);
	printf("%d! = %d",x, factorial(x));	
}
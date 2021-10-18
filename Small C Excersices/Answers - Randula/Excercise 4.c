#include<stdio.h>

int minimum(int number1 ,int number2);
int maximum(int number1 ,int number2);
int multiply(int number1 ,int number2);

int main (void)
{
	int no1 , no2;
	
	printf("Enter a Value for no 1 : ");
	scanf("%d" , &no1);
	
	printf("Enter a Value for no 2 : ");
	scanf("%d" , &no2);
	
	printf("%d " , minimum(no1 , no2));
	printf("%d " , maximum(no1 , no2));
	printf("%d " , multiply(no1 , no2));
		
	return 0;
}

int minimum(int number1 ,int number2)
{
	if (number1 >= number2)
	{
		return number2;
	}
	else
	{
		return number1;
	}
}

int maximum(int number1 ,int number2)
{
	if (number1 <= number2)
	{
		return number2;
	}
	else
	{
		return number1;
	}
}

int multiply(int number1 ,int number2)
{
	int answer;
	
	answer = number1 * number2;
	
	return answer;
}

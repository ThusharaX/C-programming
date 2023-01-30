/*Exercise 3: Practice to write functions and use those functions to solve a problem

Write three functions do the following 
add - add two integers pass as parameters and return the result 
multiply - multiply two integers pass as parameters and return the result 
square - receive an integer as a parameter and return the result after multiplying the number by itself. 
Use these functions in the main program to calculate the result of the following mathematical expression.
 (3*4 + 5*7) 2 */
 
#include <stdio.h>
int add(int a,int b);
int multiply(int a, int b);
int square(int x);//declaring function
int main()//function main begins
{
	int ans;
	ans=square(add(multiply(3,4),multiply(5,7)));//calculation
	printf("Answer : %d", ans);//display answer
 
 return 0;
 
}
int add(int a, int b)
{
	return a+b;
}
int multiply(int a,int b)
{
	return a*b;
}
int square(int a)
{
	return a*a;
}//end of main function

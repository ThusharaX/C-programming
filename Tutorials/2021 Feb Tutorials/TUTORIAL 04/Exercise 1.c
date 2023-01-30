/*Write a C program to input an integer from the keyboard and convert the number into a positive
number, if the user input is a negative value*/

#include <stdio.h>
int main(void)
{
	int n;
	
    printf("Enter an integer : ");
    scanf("%d",&n);//get input for n
    
    if (n<0)
    
    { 
       n=-n;//calculation
	}
	
	printf("%d",n);//show answer
	
	return 0;
}// end of main function

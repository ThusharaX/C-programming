/*Exercise 2: Practice arithmetic operators in C
Write a program that inputs one five-digit number, separates the number into its individual
digits and prints the digits separated from one another.
Ex: if user types, 42139, the program should print 4 2 1 3 9 */

#include <stdio.h>
int main (void)
{ 
    int number, number2, number3, number4, digit1, digit2, digit3, digit4, digit5;
    
    
	printf("Enter five digit Number and this programe separate the Number into individual digits\n"); //title
    printf("....................................................................................\n");
    printf("Enter Five-digit Number : ");
    scanf("%d",&number); //get input number
    
    digit1= number/10000; //identifying digit1
    number2= number%10000;
    
    digit2=number2/1000; //identifying digit2
    number3=number2%1000;
    
    digit3=number3/100; //identifying digit3
    number4=number3%100;
    
    digit4=number4/10;  //identifying digit4
    
    digit5=number4%10;  //identifying digit5
    
    printf("%d\t%d\t%d\t%d\t%d",digit1,digit2,digit3,digit4,digit5);

 return 0;
} // end of the main function

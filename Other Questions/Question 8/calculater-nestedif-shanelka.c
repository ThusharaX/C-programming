#include<stdio.h>

// start the main
int main(void) {
    // local variable declaration
	float num1, num2, answer;
	char operator;

	printf("Enter the first number : ");
	scanf("%f", &num1);
	
	printf("Enter the second number : ");
	scanf("%f", &num2);

	printf("Enter the operator (+, -, *, /) : ");
	scanf(" %c", &operator);
	
    // check and calculate
	if(	operator == '+') {
		answer = num1 + num2;
	}
    else if(operator == '-') {
		answer = num1 - num2;
	}
    else if(operator == '*') {
		answer = num1 * num2;
	}
    else if(operator == '/') {
		answer = num1 / num2;	
	}
    else {
		printf("\nInvalid Operator");	
	}

    // print final answer
    if ((operator == '+') || (operator == '-') || (operator == '*') || (operator == '/')) {
        printf("Answer = %.2f", answer);
    }
	
    return 0;	
}
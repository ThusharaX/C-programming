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
	switch(operator) {
		case '+' : {
			answer = num1 + num2;
			printf("Answer = %.2f", answer);
			break;
		}
		case '-' : {
			answer = num1 - num2;
			printf("Answer = %.2f", answer);
			break;
		}
		case '*' : {
			answer = num1 * num2;
			printf("Answer = %.2f", answer);
			break;
		}
		case '/' : {
			answer = num1 / num2;
			printf("Answer = %.2f", answer);
			break;
		}
		default : {
			printf("\nInvalid Operator");
		}
	}
	
    return 0;	
}
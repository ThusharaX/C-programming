//Rewrite the calculator program using a switch statement.

#include <stdio.h>
int main(void)
{//functin main begins
	float no1 ,no2 ,awns;
	char op;
	
	printf("********CALCULATOR********\n"); 
	printf("..........................\n");
	
	printf("Input Number 1 : "); //input no1
	scanf("%f",&no1);//get no1
	
	printf("Input Number 2 : ");//input no2
	scanf("%f",&no2);//get no2
	
	printf("Select Your Operator (+ , - , * , / ) : ");
	scanf("%*c%c",&op);//get operator
	
	switch (op){
		
		case '+' : awns=no1+no2;
		           printf("Awnser = %.2f",awns);// + calculation
		           break;
		           
		case '-' : awns=no1-no2;
		           printf("Awnser = %.2f",awns);// - calculation
		           break;
		           
		case '*' : awns=no1*no2;
		           printf("Awnser = %.2f",awns);// * calculation
		           break;
		           
		case '/' : awns=no1/no2;
		           printf("Awnser = %.2f",awns);// / calculation
		           break;
		           
		default  : printf("!!!! Wrong Operator...!!!!\n ");//show operator error
		
	}//end of switch

	
	 
	 return 0;

}//end of main function

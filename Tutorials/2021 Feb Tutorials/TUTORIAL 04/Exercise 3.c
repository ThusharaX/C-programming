/*Exercise 3: Practice to write an if…else statement
Write a C program to create a simple calculator. The program should allow the user to enter
two numbers and an operator.*/

#include <stdio.h>
int main(void)
{//function main begins
	float no1 ,no2 ,awns;
	char op;
	
	printf("********CALCULATOR********\n"); 
	printf("..........................\n");
	
	printf("Input Number 1 : "); //input no1
	scanf("%f",&no1);
	
	printf("Input Number 2 : ");//input no2
	scanf("%f",&no2);
	
	printf("Select Your Operator (+ , - , * , / ) : ");
	scanf("%*c%c",&op);//get operator
	
	if(op == '+' ){
		
		awns=no1+no2;//+ calculation
	}
	
	else if(op == '-' ){
		
		awns=no1-no2;//- calculation
	}
	
	else if(op == '*' ){
		
		awns=no1*no2;//* calculation
	}
	
	else if(op == '/' ){
		
		awns=no1/no2;// / calculation
	}
	
	else{
	  printf("\n");	
      printf("::::::::::::::::::::::::::\n");
	  printf("!!!! Wrong Operator...!!!!\n");  //Error notification
  	  printf("::::::::::::::::::::::::::\n");
	  printf("\n");
	  printf("!!! IF YOU ENTERED A WRONG OPERATOR THEN ANSWER ALSO WRONG !!!");
	  printf("\n");
	   
	}
	  
	 printf("Awnser = %.2f\n",awns);//show answer
	 
	
	 
	 return 0;
	   
	
}//end of the main function

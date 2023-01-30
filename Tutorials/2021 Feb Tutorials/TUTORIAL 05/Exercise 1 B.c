//Prompt the user to enter series of numbers from the keyboard and display the numbers. If user enters a negative number stop reading the numbers. 

#include <stdio.h>
int main(void)
{
	int no;
	
	printf("Input Numbers\n\n");
	
	printf("Input Number : ");
	scanf("%d",&no);//get no
		
	while (no>=0){//repetition condition
	    printf("Output %d\n\n",no);//show no
	    
		printf("Input Number : ");
		scanf("%d",&no);//get no
		
	}//end of the while function
    
    printf("\n");
    printf("End Of Reading....");
    
  return 0;

}//end of main function

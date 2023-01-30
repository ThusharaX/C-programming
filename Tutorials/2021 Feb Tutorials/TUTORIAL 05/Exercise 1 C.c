/*iii) Modify the program written in ii) above display the sum and average of the
positive numbers entered.*/

#include <stdio.h>
int main(void)
{//function main begins
	int count=0;
	float no,avg=0,sum=0;
	
	printf("Input Positive Numbers and This will show Sum and Average of It\n");
	
	printf("Input Number : ");
	scanf("%f",&no);//get no
		
	
	while (no>=0){//repetition condition
	
		++count;
		
		sum=sum+no;//sum calculation
		
		avg=sum/count;//avgcalculation
		
		printf("Sum =  %.2f\n",sum);
		printf("Count = %d\n",count);
	
		//show sum,count
	
		printf("\nInput Number : ");
		scanf("%f",&no);//get no
		
	
		
	}//end of the while function
	
    printf("\n\nAverage = %.2f\n",avg);//print average
    	
    printf("\n");
    printf("End Of Reading....");
    
  return 0;

}//end of main function

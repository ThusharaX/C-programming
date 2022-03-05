//importing libraries
#include<stdio.h>

//starting main method
int main(void)
{
	//define the array
	int marks[5][2] = {0};
	float finalMark[5] = {0};
	//define variables
	int i , j;
	
	//taking inputs from the keyboard
	for (i = 0 ; i < 5 ; i++)
	{
		printf("Student No %d\n" , i + 1);
		for (j = 0 ; j < 2 ; j++)
		{
			printf("Enter the mark of Component No %d : " , j + 1); //prompt
			scanf("%d" , &marks[i][j]);
		}
		printf("\n");
	}
	
	//printing the marks of the students
	for (i = 0 ; i < 5 ; i++)
	{
		printf("Student No %d\t" , i + 1);
		for (j = 0 ; j < 2 ; j++)
		{
			printf("%d " , marks[i][j]); //printing marks got from the keyboard
		}
		printf("\n");
	}
	
	//calculate and store the Final mark of each student
	for (i = 0 ; i < 5 ; i++)
	{
		finalMark[i] = (float)(marks[i][0] * 40.0 / 100 ) + (marks[i][1] * 60.0 / 100); //calculation
	}
	printf("\n");
	//display the final mark of each student
	for (i = 0 ; i < 5 ; i++)
	{
		printf("Final Mark of the Student No %d : %.2f\n" , i + 1 , finalMark[i]); //displaying final marks
	}
	
	//setting the return value 0
	return 0;
}
//ending main method

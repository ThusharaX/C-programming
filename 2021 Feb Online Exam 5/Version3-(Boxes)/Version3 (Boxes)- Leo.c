

#include <stdio.h>

int main(void)
{
	int boxes[4][3]; //Declaration of the 2D array with it's name and size
	int i,j,count=0;  //Decalring variables
	float volume[4],volumeCalculation;  // Decalring an array and a variable
	
	for(i=0;i<=3;i++)  
	{
		for(j=0;j<=2;j++)  // loops used to go through the 2D array
		{
			printf("Enter measurements of box %d: ",i+1);  //Asking for user input
			scanf("%d",&boxes[i][j]);  //Saving user input
		}
		printf("\n");
	}
	
	printf("\n");
	
	for(i=0;i<=3;i++)  
	{
		volumeCalculation=1;  //inialized a variable
		for(j=0;j<=2;j++)  //loop used to go through the elements in the array
		{
			volumeCalculation *= boxes[i][j];  //calculation to find the volume
		}
		volume[count]=volumeCalculation;  //storing the volume obtained of a box in the array named volume
		count++;  //incrementing a counter
	}
	
	printf("\n");
	
	for(i=0;i<=3;i++)  //loop used to go through the elements in the array
	{
		printf("Volume of box %d is: %.2f\n",i+1,volume[i]);  //Printing the volume of each box 
	}
	
	
	return 0;
}

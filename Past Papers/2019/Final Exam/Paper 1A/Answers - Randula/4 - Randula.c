#include<stdio.h>

int main (void)
{
	double loyaltyNo , loyaltyNoDat;
	char name[50] , nameDat[50]; 
	int i , noCheck = 0;
	
	FILE *loyalPtr;
	
		for (i = 1 ; i <= 5 ; i++)
		{
		loyalPtr = fopen("loyalty.dat" , "r+");
		
		if(loyalPtr == NULL)
		{
			printf("Error");
			return -1;
		}
		
		noCheck = 0;
		
		if(i > 1)
		{
			scanf("%*c");
		}
		
		printf("Enter Your Name : ");
		scanf("%s" , name);
		
		printf("Enter the Loyalty Number : ");
		scanf("%lf" , &loyaltyNo);
		
		fscanf(loyalPtr , "%lf%s" , &loyaltyNoDat , nameDat);
		while(!feof(loyalPtr))
		{
			//printf("%.0lf\t%s\n" , loyaltyNoDat , nameDat);
			if(loyaltyNoDat == loyaltyNo)
			{
				printf("Loyalty Number is already in the Database!!\n");
				noCheck++;
			}
			fscanf(loyalPtr , "%lf%s" , &loyaltyNoDat , nameDat);
		}
		
		if (noCheck == 0)
		{
			printf("New details added to the Database!!\n");
			fprintf(loyalPtr , "%.0lf\t%s\n" , loyaltyNo , name);
		}
		
		fclose(loyalPtr);
	}
	
	return 0;
}

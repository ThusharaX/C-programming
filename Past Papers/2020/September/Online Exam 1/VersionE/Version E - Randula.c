#include<stdio.h>

int main (void)
{
	//declaring variable
	int noOfChildren;
	char insType , packageType , wantToCont = 'Y';
	float totalAmount , additionalChildPrice = 0;
	
	do
	{
	additionalChildPrice = 0;	
		
	//taking user inputs about insuarance type
	printf("Insuarance Type : ");
	scanf(" %c" , &insType);
	
	if(insType != 'A' && insType != 'a' && insType != 'N' && insType != 'n' && insType != 'D' && insType != 'd' && insType != 'S' && insType != 's')
	{
		printf("Invalid Insuarance Type!\n");
		return -1;
	}
	
	//taking user inputs about package details (F / I)
	printf("Family of Individual (F - Family & I - individual) : ");
	scanf("%*c%c" , &packageType);
	
	//taking user inputs for number of children for family package
	if (packageType == 'f' || packageType == 'F')
	{
		printf("Number of children : ");
		scanf("%d" , &noOfChildren);
	} 
	
	//calculate the basic amount
	if(insType == 'A' || insType == 'a')
	{
		if (packageType == 'I' || packageType == 'i')
		{
			totalAmount = 4500.00;
		}
		else if (packageType == 'F' || packageType == 'f')
		{
			totalAmount = 5200.0;
		}
	}
	else if(insType == 'N' || insType == 'n')
	{
		if (packageType == 'I' || packageType == 'i')
		{
			totalAmount = 3100.00;
		}
		else if (packageType == 'F' || packageType == 'f')
		{
			totalAmount = 4300.0;
		}
	}
	else if(insType == 'D' || insType == 'd')
	{
		if (packageType == 'I' || packageType == 'i')
		{
			totalAmount = 3600.00;
		}
		else if (packageType == 'F' || packageType == 'f')
		{
			totalAmount = 4800.0;
		}
	}
	else if(insType == 'D' || insType == 'd')
	{
		if (packageType == 'I' || packageType == 'i')
		{
			totalAmount = 3300.00;
		}
		else if (packageType == 'F' || packageType == 'f')
		{
			totalAmount = 3800.0;
		}
	}
	
	//calculate the price for addition child/children
	if (noOfChildren > 2)
	{
		additionalChildPrice = (float) (totalAmount * 10.0 / 100 * (noOfChildren - 2));
	}
	
	//calculate and display the total amount
	totalAmount += additionalChildPrice;
	
	printf("Total Amount : %.2f\n" , totalAmount);
	
	//asking the user if the user wants to continue
	printf("Do you want to Continue (Y / N) : ");
	scanf(" %c" , &wantToCont);
	
	printf("\n");
	
	} while (wantToCont != 'n' && wantToCont != 'N');
	
	printf("\n");
	printf("Thank You!!\n");
	
	return 0;
}

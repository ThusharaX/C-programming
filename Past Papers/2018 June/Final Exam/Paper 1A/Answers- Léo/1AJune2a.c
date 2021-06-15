#include <stdio.h>

struct cus
{
	int no;
	char name[20];
	char trans;
	float mon;	
};

int main()
{
	int i;
	float max=0,min=0,totde=0,totwi=0;
	int maxdep,minwi;
	
	
	struct cus pr[5];
	
	for(i=0;i<=4;i++)
	{
		printf("Enter Acc.No:");
		scanf("%d",&pr[i].no);
		
		printf("Enter Name: ");
		scanf("%s%*c",pr[i].name);
		
		printf("Enter Transaction: ");
		scanf("%c",&pr[i].trans);
		
		printf("Enter Amount: ");
		scanf("%f",&pr[i].mon);
		
		if(pr[i].trans == 'W' )
		{
			min = pr[i].mon;
		}
		printf("\n\n");
	}
	
	for(i=0;i<=4;i++)
	{
		if((pr[i].trans =='D') || (pr[i].trans == 'd'))
		{
			
			totde += pr[i].mon;
			
			if(pr[i].mon> max)
			{
				max = pr[i].mon;
				maxdep = i;
			}
		}
		
		else
		{
			totwi += pr[i].mon;
			
			if(pr[i].mon<=min)
			{
				min = pr[i].mon;
				minwi = i;
			}
		}
 	}
 	
 	printf("Total deposit amount: %.2f\n",totde);
 	printf("Total withdrawl amount: %.2f\n",totwi);
 	printf("highest deposited customer: %s\n",pr[maxdep].name);
 	printf("lowest withdrawn customer: %s",pr[minwi].name);
	
	
	return 0;
}

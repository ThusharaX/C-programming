#include<stdio.h>
int main()
{
	int telNo, telNoInput, i;
	char name[10], nameInput[10];
	
	FILE * cfPtr;
	
	for(i = 1; i <= 5; ++i)
	{
		cfPtr = fopen("loyalty.dat","r");
		
		if(cfPtr == NULL)
		{
			printf("File cannot be open");
			return -1;
		}
		
		printf("Enter Telphone number: ");
		scanf("%d", &telNoInput);
		
		fscanf(cfPtr,"%d%s", &telNo, name);
		
		while(!feof(cfPtr))
		{
			if (telNoInput == telNo)
			{
				printf("\nLoyalty number already exists!\nEnter Telphone number: ");
				scanf("%d", &telNoInput);
				
				fclose(cfPtr);
				
				cfPtr = fopen("loyalty.dat","r");
				
				if(cfPtr == NULL)
				{
					printf("File cannot be open");
					return -1;
				}
			}
			fscanf(cfPtr,"%d%s", &telNo, name);
		}
		
		printf("Enter customer name: ");
		scanf("%s", nameInput);
		
		fclose(cfPtr);
		
		cfPtr = fopen("loyalty.dat","a");
		
		if(cfPtr == NULL)
		{
			printf("File cannot be open");
			return -1;
		}
		
		fprintf(cfPtr,"%d\t%s\n", telNoInput, nameInput);
		
		fclose(cfPtr);
	}
	
	return 0;
}

#include<stdio.h>
int main()
{
	char name[20],type;
	int i ,countS=0 , countC=0 ,countT=0;
	
	FILE *cPtr;
	cPtr = fopen("appoinment.dat","w"); 
	
	if(cPtr==NULL)
	{
		printf("Can't open file");
		return -1;
	} 
	
	for(i=1; i<=5; i++)
	{
		printf("Enter patient name and appoinment type :");
		scanf("%s %c",name,type);
		
		fprintf(cPtr, "%s\t%c\n",name,type);
	}
	
	fclose(cPtr);
	
	cPtr=fopen("appoinment.dat","r");
	
	if(cPtr==NULL)
	{
		printf("Can't open file");
		return -1;
	}
	
	fscanf(cPtr, "%s %c",name,&type);
	
	while(!feof(cPtr))
	{
		if(type== 'S')
			countS++;
		else if(type == 'C')
			countC++;
		else if(type=='T')
			countT++;
			
		fscanf(cPtr, "%s %c",name,&type);
	}
	
	printf("Appoinment Type\t\tNumber of patients\n");
	
	printf("Consulting\t\t%d\n",countC);
	printf("Scanning\t\t%d\n",countS);
	printf("Testing\t\t%d\n",countT);
	
	fclose(cPtr);
	
	return 0;
}

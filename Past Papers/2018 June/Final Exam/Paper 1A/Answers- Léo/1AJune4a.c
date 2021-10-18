#include <stdio.h>

int main()
{
	char ENo[5],check[5];
	char Name[20],name[20];
	int i,days,present=0,checker,attendance;
	
	FILE *att;
	
	att = fopen("attendance.dat","w");
	if(att==NULL)
	{
		printf("No space to create such file...");
		return -1;
	}
	
	for(i=0;i<=1;i++)
	{
		days=0;
		
		printf("Enter Employee Number: ");
		scanf("%s",ENo);
		
		printf("Enter Name: ");
		scanf("%s",Name);
		
		fprintf(att,"%s\t%s\t",ENo,Name);
		
		while(days<=6)
		{
			printf("Attendance: ");
			scanf("%d",&attendance);
			days +=1;
			fprintf(att,"%d",attendance);
		}fprintf(att,"\n");
		printf("\n\n");
	}
	
	fclose(att);
	
	
	
	return 0;
}





















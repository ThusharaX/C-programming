#include <stdio.h>

int main()
{
	char EmpNo[3],Emp_No[3];
	char name[20];
	char Attend[7],attend[7];
	int days=0,i,con;
	
	FILE *att;
	
	att = fopen("attendance.dat","r");
	if(att==NULL)
	{
		printf("No space to create such file...");
		return -1;
	}
	
	
	if(att==NULL)
	{
		printf("No such file found...");
		return -1;
	}
	
	
	printf("Enter Employee Number: ");
	scanf("%s",EmpNo);
	
	fscanf(att,"%s\t%s\t%s%*c",Emp_No,name,attend);
	while(!feof(att))
	{
		//con=0;
		for(i=0;i<=2;i++)
		{
			if(EmpNo[i]!=Emp_No[i])
			{
				fscanf(att,"%s\t%s\t%s%*c",Emp_No,name,attend);
				break;		
			}
			else
			con=1;
		}
		if(con==1)
			break;
	}
	
		for(i=0;i<=6;i++)
		{
		//	fscanf(att,"%c",&Attend[i]);
			
			if (attend[i]=='1')
			{
				days ++;
			}
		}
		
		fscanf(att,"%s\t%s\t%s",Emp_No,name,attend);
	
	
	printf("Number of days attended : %d",days);
	fclose(att);
}

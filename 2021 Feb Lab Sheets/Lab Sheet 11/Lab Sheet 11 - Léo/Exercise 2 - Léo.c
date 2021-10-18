#include <stdio.h>

int main()
{
	int sal[9]={0},i,salary;
	
	printf("Enter Salary: ");
	scanf("%d",&salary);
	
	while(salary !=-1)
	{
		if(salary>=200 && salary<=299)
		{
			sal[0]+=1;
		}
		else if (salary<=399)
		{
			sal[1]+=1;
		}
		else if (salary<=499)
		{
			sal[2]+=1;
		}
		else if (salary<=599)
		{
			sal[3]+=1;
		}
		else if (salary<=699)
		{
			sal[4]+=1;
		}
		else if (salary<=799)
		{
			sal[5]+=1;
		}
		else if (salary<=899)
		{
			sal[6]+=1;
		}
		else if (salary<=999)
		{
			sal[7]+=1;
		}
		else if(salary>1000 &&salary<=1500)
		{
			sal[8]+=1;
		}
		
		printf("Enter Salary: ");
		scanf("%d",&salary);
		
	}
	int bam = 200,boozle=299;
	for(i=0;i<=7;i++)
	{
		printf("Employees who gets a salary between %d - %d are :%d\n",bam,boozle,sal[i]);
		bam+=100;
		boozle+=100;
	}
	printf("Employees who gets a salary between %d and above are : %d\n",1000,sal[8]);
}

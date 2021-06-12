#include <stdio.h>

void InputProductions(int x[],int size);

int MinimumDay(int arr[],int size);
int MaximumDay(int arr[],int size);

int TotalProduction(int arr[],int size);
float AverageProduction(int arr[],int size);

void CompareProduction(int a1[],int a2[],int a3[],int size);
void DisplayProduction(int ar[],int size,int day);

int main()
{
	int week1_production[7],week2_production[7],production_highest[7];
	
	InputProductions(week1_production,7);
	InputProductions(week2_production,7);
	
	printf("Maximum Production in week 1: ");
	DisplayProduction(week1_production,7,MaximumDay(week1_production,7));
	
	printf("Maximum Production in week 2: ");
	DisplayProduction(week2_production,7,MaximumDay(week2_production,7));
	
	printf("Minimum Production in week 1: ");
	DisplayProduction(week1_production,7,MinimumDay(week1_production,7));
	
	printf("Minimum Production in week 2: ");
	DisplayProduction(week2_production,7,MinimumDay(week2_production,7));

	printf("Average Production of week 1 is: ");
	printf("%.2f\n",AverageProduction(week1_production,7));
	
	printf("Average Production of week 2 is: ");
	printf("%.2f\n",AverageProduction(week2_production,7));
	
	printf("Total Production of week 1 is: ");
	printf("%d\n",TotalProduction(week1_production,7));
	
	printf("Total Production of week 2 is: ");
	printf("%d\n",TotalProduction(week2_production,7));

	CompareProduction(week1_production,week2_production,production_highest,7);
	
	return 0;
}

void InputProductions(int x[],int size)
{
	int i;
	for(i=1;i<=size;i++)
	{
		printf("Input Production for day %d: ",i);
		scanf("%d",&x[i-1]);
	}printf("\n");
}

int MinimumDay(int arr[],int size)
{
	int j,min,day=1;
	min = arr[0];
	for(j=1;j<=size;j++)
	{
		if(arr[j-1]<min)
		{
			min = arr[j-1];
			day = j;
		}
	}
	return day;
}

int MaximumDay(int arr[],int size)
{
	int j,max=0,day=1;
	
	for(j=1;j<=size;j++)
	{
		if(arr[j-1]>max)
		{
			max = arr[j-1];
			day = j;
		}
	}
	return day;		
}

int TotalProduction(int arr[],int size)
{
	int i,tot=0;
	
	for(i=1;i<=size;i++)
	{
		tot += arr[i-1];
	}
	
	return tot;
}

float AverageProduction(int arr[],int size)
{
	int i;
	float ave=0,tot=0;
	for(i=1;i<=size;i++)
	{
		tot += arr[i-1];
	}
	ave = (tot/size);
	
	return ave;
}

void CompareProduction(int a1[],int a2[],int a3[],int size)
{
	int i;
	printf("\nComparison: ");
	for(i=1;i<=size;i++)
	{
		if(a1[i-1]>a2[i-1])
		{
			a3[i-1]=a1[i-1];
		}
		else
		{
			a3[i-1]=a2[i-1];
		}
		
		printf("%d\t", a3[i-1]);
	}
}

void DisplayProduction(int ar[],int size,int day)
{
	int i;
	
	for( i=1 ; i<=size ; i++ ){
		
		if( i == day ){
			printf( "%d\n", ar[i-1]);
		}
	}
}











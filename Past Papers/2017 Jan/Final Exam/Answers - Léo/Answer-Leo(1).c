#include <stdio.h>
#include <math.h>

void InputProductions(int arr[],int size);

int MinimumProduction(int arr[],int size);
int MaximumProduction(int arr[],int size);

void AverageProduction(int arr1[],int arr2[],float arr3[],int size);
void PrintProduction(int arr[],int size);

void DisplayDay(int arr[],int size,int product);
int i;

int main()
{
	int machine_A[7],machine_B[7];
	float machine_Total[7];
	
	printf("MACHINE A;\n");
	InputProductions(machine_A,7);
	
	printf("MACHINE B;\n");
	InputProductions(machine_B,7);
	
	printf("\nMAXIMUM PRODUCTION DAY OF A: ");
	DisplayDay(machine_A,7,(MaximumProduction(machine_A,7)));
	
	printf("\nMAXIMUM PRODUCTION DAY OF B: ");
	DisplayDay(machine_B,7,(MaximumProduction(machine_B,7)));
	
	printf("\nMINIMUM PRODUCTION DAY OF A: ");
	DisplayDay(machine_A,7,(MinimumProduction(machine_A,7)));
	
	printf("\nMINIMUM PRODUCTION DAY OF B: ");
	DisplayDay(machine_B,7,(MinimumProduction(machine_B,7)));
	
	printf("\nAVERAGE PRODUCTION;\n");
	AverageProduction(machine_A,machine_B,machine_Total,7);
	
	printf("\n\nPRODUCTION OF A:\n");
	PrintProduction(machine_A,7);
	
	printf("\n\nPRODUCTION OF B:\n");
	PrintProduction(machine_B,7);
	
	return 0;
	
}

void InputProductions(int arr[],int size)
{
	for( i=0 ; i<=size-1; i++){
		
		printf("Enter the Production of day %d: ",i+1);
		scanf("%d",&arr[i]);
	}
}

int MinimumProduction(int arr[],int size)
{
	int min = arr[0];
	
	for( i=0 ; i<=size-1 ; i++){
		
		if(min>arr[i]){
			
			min = arr[i];
		
		}
	}
	
	return min;
}

int MaximumProduction(int arr[],int size)
{
	int max =0;
	
	for( i=0 ; i<=size-1 ; i++){
		
		if(max<arr[i]){
			
			max = arr[i];
		
		}
	}
	
	return max;
}


void AverageProduction(int arr1[],int arr2[],float arr3[],int size)
{
	
	
	for( i=0 ; i<=size-1 ; i++){
		
		arr3[i] = ((arr1[i]+arr2[i])/2.0);
		printf("%.2f\t",arr3[i]);
		
	}
}


void PrintProduction(int arr[],int size)
{
	int x,temp,count;
	for( i=0 ; i<=size-1 ; i++){
		
		x = arr[i];
		
		if(x % 10 < 5){
			
			temp = arr[i]/10;
			
			printf("\nProduction of day %d",i+1);
			
			for( count=0; count<temp ; count++){
				
				printf("*");
			}
		}
		else{
			
			temp = arr[i]/10 +1;
			
			printf("\nProduction of day %d",i+1);
			
			for( count=0; count<temp ; count++){
				
				printf("*");
			}
		}
	}
}

void DisplayDay(int arr[],int size,int product)
{
	int y=8;
	
	for( i = 0 ; i<=size-1 ; i++){
		if(arr[i]==product){
			y=i;
			break;
		}	
	}
	
	switch(y)
	{
		case 0 	:	printf("Monday\n");
						break;
		case 1 	:	printf("Tuesday\n");
						break;
		case 2 	:	printf("Wednesday\n");
						break;
		case 3 	:	printf("Thursday\n");
						break;
		case 4	:	printf("Friday\n");
						break;
		case 5 	:	printf("Saturday\n");
						break;
		case 6 	:	printf("Sunday\n");
						break;
		default	:	printf("No Such day with the mention production..\n");																											
	}
}









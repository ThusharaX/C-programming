#include <stdio.h>
int i;
void InputRainfall(float arr[],int size);

int MinimumRainfall(float arr[], int size);
int MaximumRainfall(float arr[], int size);

float AverageRainfall(float arr[], int size);

void DisplayRainfall(float arr[],int index);
void PrintReport(float array1[],float array2[],int size);

int main()
{
	float district_A[7],district_B[7];
	
	printf("District A: \n");
	InputRainfall(district_A,7);
	
	printf("\nDistrict B: \n");
	InputRainfall(district_B,7);
	
	printf("\nMaximum Rainfall for District A: ");
	DisplayRainfall(district_A,(MaximumRainfall(district_A,7)));
	
	printf("\nMaximum Rainfall for District B: ");
	DisplayRainfall(district_B,(MaximumRainfall(district_B,7)));
	
	printf("\nMinimum Rainfall for District A: ");
	DisplayRainfall(district_A,(MinimumRainfall(district_A,7)));
	
	printf("\nMinimum Rainfall for District B: ");
	DisplayRainfall(district_B,(MinimumRainfall(district_B,7)));
	
	printf("\nAverage of District A :%.1f ",AverageRainfall(district_A, 7));
	
	
	printf("\nAverage of District B : %.1f",AverageRainfall(district_B, 7));
	
	
	PrintReport(district_A,district_B,7);
}

void InputRainfall(float arr[],int size)
{
	for( i=0;i <=size-1 ; i++){
		
		printf("Enter the Rainfall Measurements for day %d: ",i+1);
		scanf("%f",&arr[i]);
	}
}

int MinimumRainfall(float arr[], int size)
{
	float min = arr[0];
	int minindex = 0;
	
	for( i=0;i <=size-1 ; i++){
		
		if(min>arr[i]){
			min = arr[i];
			minindex=i;
		}
	}
	return minindex; 
}

int MaximumRainfall(float arr[], int size)
{
	float max = 0;
	int maxindex = 0;
	
	for( i=0;i <=size-1 ; i++){
		
		if(max<arr[i]){
			max = arr[i];
			maxindex=i;
		}
	}
	return maxindex;
}

float AverageRainfall(float arr[], int size)
{
	float total = 0, average;
	
	for (i = 0; i < size; ++i) {
		total += arr[i];
		average =(float) total / size;
	}
	return average;
}

void DisplayRainfall(float arr[],int index)
{
	
	printf("%.1f",arr[index]);
}

void PrintReport(float array1[],float array2[],int size)
{
	printf("\n\nReport;\n\nDay\t\tDistrict A\tDistrict B\tMinimum\tMaximum\n");
	
	for(i=0;i<=size -1; i++){
		
		switch (i){
			
			case (0):	printf("Monday\t\t");
							break;
			case (1):	printf("Tuesday\t\t");
							break;
			case (2):	printf("Wednesday\t");
							break;
			case (3):	printf("Thursday\t");
							break;
			case (4):	printf("Friday\t\t");
							break;
			case (5):	printf("Saturday\t");
							break;
			case (6):	printf("Sunday\t\t");
							break;																								
		}
		
		DisplayRainfall(array1,i);
		printf("\t\t");
		DisplayRainfall(array2,i);
		printf("\t\t");
		
		if(array1[i]>array2[i]){
			printf("%.1f\t%.1f\n",array2[i],array1[i]);
		}
		else{
			printf("%.1f\t%.1f\n",array1[i],array2[i]);
		}
	}
	
	printf("\nRainfall Range\nDistrict A:Min=");
	DisplayRainfall(array1,MinimumRainfall(array1,7));
	printf(" Max= ");
	DisplayRainfall(array1,MaximumRainfall(array1,7));
	
	printf("\nRainfall Range\nDistrict B:Min=");
	DisplayRainfall(array2,MinimumRainfall(array2,7));
	printf(" Max= ");
	DisplayRainfall(array2,MaximumRainfall(array2,7));
	
	printf("\n\nAverage Rainfall\nDistrict A: %.1f",AverageRainfall(array1,7));
	
	printf("District B: %.1f",AverageRainfall(array2,7));
	
}

















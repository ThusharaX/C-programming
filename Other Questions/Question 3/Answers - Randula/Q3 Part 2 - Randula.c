#include<stdio.h>

int main ()
{
	//declaring variables
	char name[20];
	int year , age;
	
	//taking user inputs for name
	printf("Name : ");
	scanf("%s" , name);
	
	//taking user inputs for year
	printf("Year of Birth : ");
	scanf("%d" , &year);
	
	printf("\n");
	
	//calculate the age
	age = 2021 - year;
	
	//print the output
	printf("Hey %s!!! You are %d years old. Great" , name , age);
	
	return 0;
}

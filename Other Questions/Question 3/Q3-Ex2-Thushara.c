#include<stdio.h>

int main(void) {
	
	char name[10];
	int bYear;
	
	printf("Name : ");
	scanf("%s", name);
	
	printf("Year of Birth : ");
	scanf("%d", &bYear);
	
	printf("Hey %s!!! You are %d years old. Great", name, 2021-bYear);
	
    return 0;
}

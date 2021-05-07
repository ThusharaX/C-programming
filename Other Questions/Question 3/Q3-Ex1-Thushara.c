#include<stdio.h>
#include<string.h>

int main(void) {
	
	char address[200];
	int i;
	int len;
	
	printf("Input : ");
	gets(address);
	
	len = strlen(address);
	
	printf("Output : \n\n");
	for(i = 0; i < len; i++) {
		if (address[i] == ',') {
			printf(",\n");
		}
		else {
			printf("%c", address[i]);
		}
	}
	
    return 0;
}

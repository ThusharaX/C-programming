#include<stdio.h>
#include<string.h>

int main(void) {
	
	char word[10];
	int length, count, flag;
	
	printf("Enter any word : ");
	scanf("%10s", word);
	
	length = strlen(word);
	
	for (count = 0; count <= (length/2); count++) {
		if (word[count] != word[(length - 1) - count]) {
			flag = 0;
			break;
		}
		
		else {
			flag = 1;
		}
	}
	
	if (flag == 1) {
		printf("\n%s is a palindrome\n", word);
	}
	else {
		printf("\n%s is a not a palindrome\n", word);
	}
	
	return 0;
}

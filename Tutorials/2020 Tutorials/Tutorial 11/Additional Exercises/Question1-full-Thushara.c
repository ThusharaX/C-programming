//Tutorial 11 Additional Exercises Question 1
// Thushara Thiwanka

#include <stdio.h>

#define STUDENT 3
#define QUESTION 5

int main(void) {
	
	char stAnswer[STUDENT][QUESTION];
	char correctAnswers[5] = {'F', 'F', 'T', 'T', 'F'};
	char answer;
	int s, q;
	int results;
	int upperCase;
	
	for (s = 0; s < STUDENT; s++) {
		printf("Student %d:\n", s+1);
		for (q = 0; q < QUESTION; ) {
				
			printf("\tAnswer for question %d : ", q+1);
			scanf(" %c", &answer);
			
			//convert lowercase to uppercase
			if(answer >= 'a' && answer <= 'z') {
				answer -= 32;
			}
			
			if (answer=='T' || answer=='t' || answer=='F' || answer=='f') {
				stAnswer[s][q] = answer;
			}
			else {
				printf("\tInvalid...! re-enter the value.\n");
				continue;
			}
			q++;
		}
	}
	
	printf("\n");
	
	for (s = 0; s < STUDENT; s++) {
		for (q = 0; q < QUESTION; q++) {
			if (stAnswer[s][q] == correctAnswers[q]) {
				results += 1;
			}
		}
		printf("Student %d No. of correct answers = %d\n", s+1, results);
		results = 0;
	}
	
	return 0;
}


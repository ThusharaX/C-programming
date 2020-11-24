/* 2020 June
 * Online Exam 3
 * Version B
 */ 

#include<stdio.h>

// main function
int main(void)
{
	int seat[10] = {0}; // seat nubers array
	int seatNum = 0; // seat number enterd by user
	
	// begin do while
	do {
		// user input for seat number
		printf("Pls input the seat number (1- 10): "); // prompt for input
		scanf("%d", &seatNum);
		
		// check if seat number valid
		if (seatNum <= 10 && seatNum >= 1) {
			if (seat[seatNum -1] == 0) {
				seat[seatNum-1] = 1;
			} // end if
			
			else if (seat[seatNum -1] == 1) {
				printf("Sorry. The seat %d is reseved.\n", seatNum);
			} // end else if
		}
	
		else if (seatNum == -1) {
			break;
		} // end else if
		
		// invalid seat number error message
		else {
			printf("Sorry. Please input a valid seat number.\n");
			continue;
		} // end else
		
	} while (seatNum != -1); // end do while
	
	return 0;
}

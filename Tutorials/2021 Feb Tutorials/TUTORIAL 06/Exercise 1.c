/*Exercise 1  Practice to use math library functions 
Show the value of x after each of the following statements is performed:
i. x = floor(7.5)
ii. x = ceil (0.0)
iii. x = ceil (-6.4)
iv. x = log10(100.0)
v. x = ceil (floor (-5.5)) */

#include <stdio.h>
#include <math.h>
int main(void)
{
	printf("%.2f\n",floor(7.5)); //i
	printf("%.2f\n",ceil (0.0)); //ii
	printf("%.2f\n",ceil (-6.4)); //iii
	printf("%.2f\n",log10(100.0)); //iv
	printf("%.2f\n",ceil (floor (-5.5))); //v

	return 0;
}//end of the main function

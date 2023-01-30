//Exercise 3
#include <stdio.h>
int main( void )
{//function main begings
	int s, p; //declaring variables
	double sales[4][5]; //declaring 2d array
	double total[5] = {0,0,0,0,0};//declaring 1d array
	
	for( s = 0 ; s < 4 ; ++s ){//for loop for get inputs begings
		
		printf( "Sales Person %d \n", s+1 );
		
		for( p = 0 ; p < 5 ; ++p ){
			
			printf( "Product Number %d\n", p+1 );
			printf( "Input total dollar value of that product sold that day : ");
			scanf( "%lf", &sales[s][p]);
				
			
		}
		printf( "\n" );
	}//for loop for get inputs ends
	
	for( p =0 ; p<5 ; ++p ){//for loop for cal total begings
		
		for( s=0 ; s<4 ; ++s ){
			
			total[p] = total[p] + sales[s][p];
			
		}
		
		printf( "Product %d Total sales : %.2f", p+1, total[p]);
		printf("\n" );
	}//for loop for cal total ends
	
	
return 0;	
}//end of the main function

#include <stdio.h>
int main( void )
{//function main begins
	int Mat1[4][4], Mat2[4][4], Sum[4][4], i, j;//declaring variables
	
	printf("\nInput values for Matrix 1 : \n");
	
	for(i=0;i<4;i++){//matrix 1
		for(j=0;j<4;j++){
			scanf("%d", &Mat1[i][j]);
		}		
	}
	
	printf("\nInput values for Matrix 2 : \n");
	
	for(i=0;i<4;i++){//matrix 2
		for(j=0;j<4;j++){
			scanf("%d", &Mat2[i][j]);
		}		
	}

	for(i=0;i<4;i++){//calculation 
		for(j=0;j<4;j++){
			Sum[i][j] = Mat1[i][j] + Mat2[i][j];	
		}		
	}
	
	printf("\n:: Sum of the matrix ::\n");
	
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			printf("%d",Sum[i][j]);
		}
		printf("\n");
	}
	
}//function main ends

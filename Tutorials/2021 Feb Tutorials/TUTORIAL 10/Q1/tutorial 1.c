#include <stdio.h>
int main(void)
{//function main begins
	int number,test;//declaring variables
	
	FILE *nfptr;
	
	nfptr = fopen("number.txt","a+");//open file in append plus mode
	
	if( nfptr == NULL ){
		
		printf( "File cannot open\n");
		return -1;
		
	}
	
	printf( "Input Number : " );
	scanf( "%d", &number);
	
	fscanf(nfptr,"%d", &test);
	while(!feof(nfptr)){
		
		if( test == number ){
			
			printf( "\n::Number already in number.dat::\n" );
			return -1;
		}
		
		else{
			
			fscanf(nfptr, "%d", &test);
			
		}
	}
	
	fprintf( nfptr,"%d\t", number);
	fclose(nfptr);//close file
	
	nfptr = fopen("number.txt","r");//open file in reading mode
	
	fscanf(nfptr, "%d", &number);
	
	while( !feof(nfptr)){
		
		printf("%d\t", number);
		fscanf(nfptr, "%d", &number);
		
	}
	fclose(nfptr);//close file
	
return 0;	
}

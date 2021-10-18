#include <stdio.h>
#include <string.h>

void convertToUpperCase( char a[], int size);

int main()
{
	char address[150];	
	char string[] = "SLIIT,New Kandy Road, Malabe";
	int len;
	
	
	
	strcpy( address, string);
	len = strlen(address);
	
	convertToUpperCase( address, len);
	
	return 0;
}

void convertToUpperCase( char a[], int size)
{
	int i;
	
	for( i = 0 ; i < size ; i++){
		
		if( a[i] >= 97 && a[i] <= 122){
			a[i] -=32;
			printf( "%c", a[i] );
		}
		else if( a[i] >= 65 && a[i] <= 122 ){
			printf( "%c", a[i]);
		}
		else{
			printf("%c",a[i]);
		}
	}
}

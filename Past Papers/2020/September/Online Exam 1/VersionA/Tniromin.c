#include <stdio.h>
//Program to  display hotel rates of ABC Hotel (pvt) ltd


int FindRoom (int x,char y){
	//X roomtype Y Accomodation Type
	if(x==1){
		if(y=='F'){
			return 25555 ;
		}
		else{
			return 17250 ;
		}
	}
	else if(x==2){
		if(y=='F'){
			return 17500 ;
		}
		else{
			return 12250 ;
		}
	}
	else if(x==3){
		if(y=='F'){
			return 9000 ;
		}
		else{
			return 7250 ;
		}
	}
	else{
		printf("Invalid Type of Room");
	}
}

float discount(char g,float a){
	
	if(g=='G'){
		
		return a*12.5/100;
		
	}
	else if(g=='S'){
		
		return a*11.5/100.0;
	}
	else if (g=='B'){
		
		return a*9.5/100.0;
	}
	
}

int main (){
	int roomtype , days ;// Type of room and No of days staying And Amount
	char acombasis;// Accommodation Basis	
	char rewardcard;// For reward card type
	float amount ;
	
	do{
		printf("Enter type of room:");
		scanf("%d%*c",&roomtype);
		
		if(roomtype== -1){
			continue;
		}
	
		printf("Enter Accommodation Basis(F/H):");
		scanf("%c",&acombasis);
	
//	printf("\n%d coltana %c",roomtype,acombasis);
		printf("Enter No of days:");
		scanf("%d%*c",&days);
		
		printf("Enter Reward Card Type(G,S,B):");
		scanf("%c",&rewardcard);
	
		amount=FindRoom(roomtype,acombasis);
		amount=amount*days;
		
		amount = discount(rewardcard,amount);
		
		printf("Amount(Rs.): %.2f \n",amount);
		
}while (roomtype!=  -1);
		
	
}
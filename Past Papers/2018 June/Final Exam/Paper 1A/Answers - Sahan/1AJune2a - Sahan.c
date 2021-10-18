#include<stdio.h>
#include<string.h>
struct customer {
	int accNo;
	char name[10];
	char type;
	float amount;
};

int main()
{
	int i;
	float dipAmount=0, withAmount=0, withMin, dipMax;
	char minName[10], maxName[10];
	
	//struct account customer[5];
	struct customer cust[5] = {
		{8254,"Viraj",'D',500.00},
		{1267,"Sudesh",'D',1000.00},
		{7823,"Ama",'W',350.00},
		{9023,"Danuli",'W',250.00},
		{4587,"Hiran",'D',750.00},
	};
	
	for(i = 1; i < 5; ++i) {
	
	withMin = cust[0].amount;
	strcpy(minName, cust[0].name);
	
	dipMax = cust[0].amount;
	strcpy(maxName, cust[0].name);
		
		if(cust[i].type == 'W') {
			withAmount += cust[i].amount;
			
			if(withMin > cust[i].amount) {
				withMin = cust[i].amount;
				strcpy(minName, cust[i].name);
			}
		}
		
		if(cust[i].type == 'D') {
			dipAmount += cust[i].amount;
			
			if(dipMax < cust[i].amount) {
				dipMax = cust[i].amount;
				strcpy(maxName, cust[i].name);
			}
		}
	}

	printf("Total deposit amount: %.2f\nTotal wuthdrawal amount: %.2f", dipAmount, withAmount);
	printf("\nName of the customer with the maximum deposit amount: %s", maxName);
	printf("\nName of the customer with the minimum withdraw amount: %s", minName);
	
	return 0;
}

#include <stdio.h>

int main()
{
	char roomType, method,con;
	int rooms, nights,perNight,sum;
	float discount,tot,dis;
	
	sum = 0;
	
	while(con != 'N' && con != 'n')
	{
		printf("Input room type :");
		scanf(" %c", &roomType);
		
		printf("Enter number of rooms :");
		scanf("%d", &rooms);
		
		printf("Enter number of nights :");
		scanf("%d", &nights);
		
		if(roomType == 'D')
		{
			perNight = 31000;
		}
		else if(roomType == 'S')
		{
			perNight = 35000;
		}
		else if(roomType == 'C')
		{
			perNight = 50000;
		}
		else if(roomType == 'E')
		{
			perNight = 75000;
		}
		else if(roomType == 'P')
		{
			perNight = 100000;
		}
		else
		{
			printf("Invalid room type");
			break;
		}
		
		sum = sum + (perNight * nights * rooms);
		
		printf("Do you want to continue :");
		scanf(" %c", &con);
	}
		printf("Enter paying method :");
		scanf(" %c", &method);
		
		if(method == 'C')
		{
			discount = 10/100.0;
		}
			else
		{
			discount = 0;
		}
		
		
		dis =sum * discount;
		tot = sum - (dis);
		printf("You HAVE %.2f discount ",dis);
		printf("\nFinal bill amount is : %.2f",tot);
		
		return 0;
}

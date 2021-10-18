#include <stdio.h>

int main()
{
	char LED[4][4],choice;
	int i,j,counter=1,fin=0;
	
	for(i=0;i<=3;i++)
	{
		for(j=0;j<=3;j++)
		{
			printf("Enter the color %d of the display: ",counter);
			scanf("%c%*c",&LED[i][j]);
			counter ++;
		}
	}
	
	printf("Which colour?(R/B/G): ");
	scanf("%c",&choice);
	
	switch (choice)
	{
		case('R')	: printf("Red LED bulb positions\n");
						break;
		case('B')	: printf("Blue LED bulb positions\n");
						break;
		case('G')	: printf("Green LED bulb positions\n");
						break;
		default		: printf("Unknown colour");
						return -1;												
	}
	
	for(i=0;i<=3;i++)
	{
		for(j=0;j<=3;j++)
		{
			if(LED[i][j]==choice)
			{
				printf("[%d,%d] ",i,j);
			}
		}
	}
	
	return 0;
}

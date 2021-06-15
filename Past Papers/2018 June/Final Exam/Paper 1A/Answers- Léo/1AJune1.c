#include <stdio.h>

int main()
{
	int i=0;
	float hm=0,mk=0,fn=0;
	char course,des;
	
	while((i!=100))
	{
		printf("Enter Course Type:");
		scanf("%c%*c",&course);
		
		if((course =='H') || (course =='h'))
		{
			hm += 1500;
			i++;
		}
		else if ((course =='M') || (course =='m'))
		{
			mk += 2000;
			i++;
		}
		else if ((course =='F') || (course =='f'))
		{
			fn += 2500;
			i++;
		}
		else 
		{
			printf("Invalid course.... TRY AGAIN...\n");
			continue;
		}
		
		printf("Do you want to register more students?(Y/N) : ");
		scanf("%c%*c",&des);
		
		if((des == 'N') || (des == 'n'))
		{
			break;
		}
	}
	
	printf("\nTotal fees from DHM is %.2f with %.0f students\n",hm,(hm/1500));
	printf("\nTotal fees from DM is %.2f with %.0f students\n",mk,(mk/2000));
	printf("\nTotal fees from DF is %.2f with %.0f students\n",fn,(fn/2500));
}

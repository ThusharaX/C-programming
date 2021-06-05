#include <stdio.h>

int main()
{
	double no,check;
	int i;
	char name[20],dibs[20];
	
	FILE *loy;
	
	loy = fopen("loyalty.dat","r+");
	
	if(loy == NULL)
	{
		printf("Couldn't find such file...");
		return -1;
	}
	
	
	for(i=0;i<=4;i++)
	{
		printf("Enter NAME: ");
		scanf("%s",name);
	
		printf("Enter Loyalty number: ");
		scanf("%lf",&no);
	
		fscanf(loy,"%lf %s",&check,dibs);
		while(!feof(loy))
			{
				if(check == no)
				{
					printf("Loyalty Number already exisits....\nRe-enter number...\n");
					printf("Enter Loyalty number: ");
					scanf("%lf",&no);
					rewind(loy);
				}
				fscanf(loy,"%lf %s",&check,dibs);
			}
			fprintf(loy,"%.0lf %s\n",no,name);
			rewind(loy);
	}
	fclose(loy);	
}

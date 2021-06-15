#include <stdio.h>
#include <assert.h>
#include<math.h>

float CD(int time,float TOTA);
void disp(float finTOT);
void testCD();

int main()
{
	testCD();
	
	int time,bamboozle=1;
	float TA,fa;
	
	while(bamboozle !=0)
	{
		printf("Time shopped:");
		scanf("%d",&time);
		
		if((time<16) &&(time>22))
		{
			printf("Invalid Time...\n");
			
		}
		else
		{
			bamboozle=0;
		}
	}
		printf("Total Amount:");
		scanf("%f",&TA);
		
	fa=TA-(CD(time,TA));
	
	printf("Final Amount: %.2f\n",fa);
	
	disp(fa);
	
	return 0;
}

float CD(int time,float TOTA)
{
	float dis;
	if((time<=19))
	{
		if(TOTA>=5000)
		{
			dis = TOTA * 0.1;			
		}
		else if (TOTA >=2500)
		{
			dis = TOTA * 0.07;
		}
		else
		{
			dis =0;
		}
	}
	else
	{
		if(TOTA>=5000)
		{
			dis = TOTA*0.12;
		}
		else if (TOTA >=2500)
		{
			dis = TOTA * 0.09;
		}
		else
		{
			dis =0;
		}	
	}
	
	return dis;
}
void disp(float finTOT)
{
	if(finTOT>=7000)
	{
		printf("You Have Recieved A Free Packet Of Milk");
	}
	else if (finTOT>5000)
	{
		printf("You Have Recieved A Free Sgar 1KG");
	}
	else if (finTOT>3000)
	{
		printf("You Have Recieved Free 12 EGGS ");
	}
	else
	{
		printf("Get Lost.....");
	}
}

void testCD()
{
	float tolerance = 0.0001;
	assert((fabs(CD(17,6000))-5400)<tolerance);
	assert((fabs(CD(21,8000))-7040)<tolerance);
	
}


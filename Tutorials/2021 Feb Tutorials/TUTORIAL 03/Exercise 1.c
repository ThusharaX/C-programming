/*this program calculate circle diameter, the circumference
and the area.*/

/*i.Write a C program to enter the radius of a circle and displays the diameter, the circumference
and the area.*/

#include <stdio.h>

int main(void)

{
	float radius,diameter,circumference,area;
	
	printf("THIS PROGRAME CALCULATE CIRCLE DIAMETER\n");
	  printf("Enter Radius : ");
	  scanf("%f",&radius);  //get radius
	  
	  diameter=radius*2;  //diameter calculation
	  
	  printf("DIAMETER : ");
	  printf("%.2f\n",diameter);  //show diameter
	  
	  printf("....................................................................\n");
	  
	  printf("CALCULATE CIRCLE CIRCUMFERENCE\n");
	  
	  circumference=2*22/7.0*radius;  //circumference calculation
	  
	  printf("CIRCUMFERENCE : ");
	  printf("%.2f\n",circumference);  //show circumference
	  
	  printf("....................................................................\n");
	  
	  printf("CALCULATE CIRCLE AREA\n");
	  
	  area=(22/7.0)*radius*radius;  //area calculation
	  
	  printf("AREA : ");
	  printf("%.2f",area);     //show area
	  
	  
	  return 0;
	
} //end of the function

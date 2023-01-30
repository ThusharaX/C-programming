#include <stdio.h>
#include <stdlib.h>

float calcFinalMark(int a,int b);//i)function initialization
char findGrade(float a);
void printDetails(char a[],float b, char c);

int main()
{
    char nm[20];
    int am;
    int pm=0;

    for(int i=0;i<5;i++){//loop for 5 students

    printf("Enter Name: ");
    scanf("%s",nm);
    printf("Assignment Mark: ");
    scanf("%d",&am);

    if(am>50){ //use can only enter paper mark if assignment mark is above 50.
        printf("Paper Mark: ");
        scanf("%d",&pm);
    }

    float d = calcFinalMark(am,pm);
    char g = findGrade(d);

    printDetails(nm ,d ,g);


    }
    return 0;
}


float calcFinalMark(int a,int b){//return Final mark
    return( a*0.3 +b*0.7   );
}

char findGrade(float a){//Return Grade
    char z;
    if(a>=75)
        z = 'A';
    else if(a>=60)
        z = 'B';
    else if(a>=50)
        z = 'C';
    else
        z = 'F';
    return(z);
}

void printDetails(char a[],float b, char c){//printing values
    printf("Name: %s Final Mark: %.1f Grade: %c\n",a ,b ,c);
}






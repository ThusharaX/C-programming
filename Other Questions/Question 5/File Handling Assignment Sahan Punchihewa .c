#include<stdio.h> // Standard input output header file
#include <stdlib.h> // Standard header file 
#include<time.h> // Time header file
void delay(int seconds)  // Function for time
{
    int mseconds=1000*seconds;
    clock_t stime = clock();
    while (clock() < stime + mseconds);
}
int main(void) // Main function
{

    printf("Student ID : 00000\n"); // Display Student ID Number
    printf("Student Name : Sahan Punchihewa\n");  // Display Student Name
    printf("Mac Address :"); // Display Mac address
    system("getmac"); // Get mac address from system
    printf("\n"); // New line
    printf("Computer Name :"); // Dispalay computer name
    system("hostname"); // Get computer name from system

    // Declare variables

    int Number[20];
    int Calc;


    FILE *Fptr;   // Create file pointer

    Fptr = fopen("Assignment.txt", "w");  // Create file

    if(Fptr == NULL) { // Check file open successfully or not

        printf("File is not create successfully"); // Display if file not created sucessfully

        return -1; // return
    }
        
     for(int i=0; i<20; i++) { // For loop the employee details

           printf("Enter the Value %d :", i+1); // System Ask enter the value
           scanf("%d", &Number[i]); // user input value
        }

        printf("\n"); // New Line 
        printf("\n"); // New Line 

        for (int i=0;i<20;i++){ // For loop
            time_t wt;
            time(&wt); // time
            delay(1); // 1 sec delay
            Calc = Number[i]* Number[i];   // Calculation of entered value
            printf("Count :%d\t Entered Value :%d\t  Square Value :%d\t System Time :%s\n"
                   ,i+1,Number[i],Calc,ctime(&wt)); // display all details of Square values and entered number

            fprintf(Fptr,"%d\t%d\t%d\t%s",i+1,Number[i],Calc,ctime(&wt)); // Write all the details on created file
        }

        {
            time_t rt;
            time(&rt);

            printf("\t%s",ctime(&rt)); // diaply time 
             delay(1);
        }


        fclose(Fptr); // close file



    return 0; // End of the function
}


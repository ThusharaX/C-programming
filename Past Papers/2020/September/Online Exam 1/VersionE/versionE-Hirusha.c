#include <stdio.h>

int main(){
  first_option();
return 0;
}

int additional_tot(int seats){
    int optionn;
    int tot;
    int x = 0; 

    char yn;  

     while(x<1){
        printf("\nDo you need any extra services ( y/n) : ");
        scanf(" %c", &yn);
        
        switch(yn){
            case 'Y':
            case 'y':
            printf("Input your option : ");
            scanf(" %d", &optionn);
                switch(optionn){
                    case 1:
                         tot = 7800 * seats;
                    break;
                    case 2:
                         tot = 1500 * seats;
                    break;
                    case 3:
                         tot = 19500 * seats;
                    break;
                    case 4:
                         tot = 2000 * seats;
                    break;
                }
            break;
            case 'N':
            case 'n':
                x=2; // break the while loop 
            break;
        }
    }
    return tot;
}

void first_option(){
  int option;
  char type;
  int seats;
  int tot = 0;
  
    printf("\nInput Airline Option : ");
    scanf(" %d", &option);

    switch (option){
     case 1:
        printf("Class type ( E/ B )  : ");
        scanf(" %c", &type);
        printf("Number of seats      : ");
        scanf(" %d", &seats);
       
            if(type == 'E'){
                tot = 36500 * seats;
            }else if(type == 'B'){
                tot = 77600 * seats;
            }

         tot = tot + additional_tot(seats);
         printf("\nTotal Price : %d", tot); 
        break;

     case 2:
        printf("Class type ( E/ B )  : ");
        scanf(" %c", &type);
        printf("Number of seats      : ");
        scanf(" %d", &seats);
            if(type == 'E'){
                tot = 35800  * seats;
            }else if(type == 'B'){
                tot = 76500 * seats;
            }
         tot = tot + additional_tot(seats);
         printf("\nTotal Price : %d", tot);  
        break;

     case 3:
        printf("Class type ( E/ B )  : ");
        scanf(" %c", &type);
        printf("Number of seats      : ");
        scanf(" %d", &seats);
            if(type == 'E'){
                tot = 54600  * seats;
            }else if(type == 'B'){
                tot = 84700 * seats;
            }
         tot = tot + additional_tot(seats);
         printf("\nTotal Price : %d", tot); 
        break;

     case 4:
    printf("Class type ( E/ B )  : ");
        scanf(" %c", &type);
        printf("Number of seats      : ");
        scanf(" %d", &seats);
            if(type == 'E'){
                tot = 28500  * seats;
            }else if(type == 'B'){
                tot = 42800 * seats;
            }
         tot = tot + additional_tot(seats);
         printf("\nTotal Price : %d", tot);  
   break;          
    default:
        printf("You select invalid option.");
        break;
    }

    return 0;
}





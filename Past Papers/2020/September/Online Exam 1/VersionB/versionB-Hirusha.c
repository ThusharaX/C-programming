#include <stdio.h>

int additional_tot(int guests,int day);
int main(){
    
  int option;
  int guests;
  int day;
  int tot = 0;
    
    printf("Input Room Option : ");
    scanf(" %d", &option);

    switch (option){
    case 1:
        printf("Number of guests : ");
        scanf(" %d", &guests);
        printf("Number of Days : ");
        scanf(" %d", &day);
        if(guests<=2){
            tot = 45000 * guests * day;
        }else if(guests<=5){
            tot = 44000 * guests * day;
        }else{
            tot = 43000 * guests * day;
        }
         tot = tot + additional_tot(guests,day);

   printf("Total Price : %d", tot); 
        break;
    case 2:
        printf("Number of guests : ");
        scanf(" %d", &guests);
        printf("Number of Days : ");
        scanf(" %d", &day);
        if(guests<=2){
            tot = 40000 * guests * day;
        }else if(guests<=5){
            tot = 38000 * guests * day;
        }else{
            tot = 35000 * guests * day;
        }

      tot = tot + additional_tot(guests,day);

   printf("Total Price : %d", tot); 
        break;
    case 3:
        printf("Number of guests : ");
        scanf(" %d", &guests);
        printf("Number of Days : ");
        scanf(" %d", &day);
        if(guests<=2){
            tot = 37500  * guests * day;
        }else if(guests<=5){
            tot = 35000  * guests * day;
        }else{
            tot = 32000 * guests * day;
        }

        tot = tot + additional_tot(guests,day);

   printf("Total Price : %d", tot); 
        break;        
    default:
        printf("You select invalid option.");
        break;
    }

}

int additional_tot(int guests,int day){
    int optionn;
    int tot;
    int x = 0; 

    char yn;  

     while(x<1){
        printf("Do you need any additional tours ( y/n) : ");
        scanf(" %c", &yn);
        
        switch(yn){
            case 'Y':
            case 'y':
            printf("Input your option : ");
            scanf(" %d", &optionn);
                switch(optionn){
                    case 1:
                        tot = tot + (3500 * guests );
                    break;
                    case 2:
                         tot = tot + (1000 * guests );
                    break;
                    case 3:
                         tot = tot + (1500 * guests );
                    break;
                    case 4:
                         tot = tot + (2000 * guests );
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

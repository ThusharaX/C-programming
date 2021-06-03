#include<stdio.h>

float det_discount(float amount);
int main(){
    int roomtyp;
    int noofdays;
    char accom_basis;
    char card_type;
    float amount;
    int X;
    
for(X=0; X!=-1;){
    printf("Enter Type OF Room : ");
    scanf("%d", &roomtyp);
    if(roomtyp!=-1){

    switch(roomtyp){
        case 1:
            printf("Enter Accommodation Basis (F/H)  : ");
            scanf("%s",&accom_basis);
            printf("Enter No of days : ");
            scanf("%d",&noofdays);

            if(accom_basis=='F'){
                amount = 25555 * noofdays;
            }else if (accom_basis=='H'){
                amount = 17250 * noofdays;
            }else{
                printf("\n_Invalid Accomodation Type_\n");
            }
            //printf("Amount (Rs.) : %.2f\n\n",amount);

             amount = amount - det_discount(amount);

            printf("Amount (Rs.) : %.2f\n\n",amount);
        break;

         case 2:
            printf("Enter Accommodation Basis (F/H)  : ");
            scanf("%c",&accom_basis);
            printf("Enter No of days : ");
            scanf("%d",&noofdays);

            if(accom_basis=='F'){
                amount = 17500 * noofdays;
            }else if (accom_basis=='H'){
                amount = 12250 * noofdays;
            }else{
                printf("\n_Invalid Accomodation Type_\n");
            }
            //printf("Amount (Rs.) : %.2f\n\n",amount);

             amount = amount - det_discount(amount);

            printf("Amount (Rs.) : %.2f\n\n",amount);
        break;

        case 3:
            printf("Enter Accommodation Basis (F/H)  : ");
            scanf("%c",&accom_basis);
            printf("Enter No of days : ");
            scanf("%d",&noofdays);

            if(accom_basis=='F'){
                amount = 9000 * noofdays;
            }else if (accom_basis=='H'){
                amount = 7250 * noofdays;
            }else{
                printf("\n_Invalid Accomodation Type_\n");
            }
            //printf("Amount (Rs.) : %.2f\n\n",amount);

            amount = amount - det_discount(amount);

            printf("Amount (Rs.) : %.2f\n\n",amount);
        break; 

        default:
            printf("\t_Invalid Room Type_\n\n");
            break;
    }

         }else {
        X = -1;
         }

    }
}


float det_discount(float amount){

    float discount;
    char card_type;

    printf("Enter Reward Card Type ( G, S, B ) : ");
    scanf("%s",&card_type);

    switch(card_type){
        case 'G':
        case 'g':
            discount = ((amount/100) * 12.5);
            break;
        
        case 'S':
        case 's':
            discount = ((amount/100) * 11.5);
            break;
        case 'B':
        case 'b':
            discount = ((amount/100) * 9.5);
            break;
        default:
           // printf("\t_invalid Reward Card Type");
            break;

    }
        //discount = amount;

    return discount;
}




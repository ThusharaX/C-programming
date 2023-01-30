#include <stdio.h>


int main()
{
    int numbers[5],a=0;

     for(int i=0; i<5; ++i){
          printf("Enter number%d: ",i+1);
          scanf("%d", &numbers[i]);
     }

    for(int j=0;j<5;j++){
        if(a<numbers[j])
            a=numbers[j];
    }

    printf("maximum value : %d",a);
     return 0;

}

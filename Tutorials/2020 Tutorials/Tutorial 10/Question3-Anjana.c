#include <stdio.h>


int main()
{
    int Motion[5];

     for(int i=0; i<5; ++i){
          printf("Enter number%d: ",i+1);
          scanf("%d", &Motion[i]);
     }

    printf("After rotating: "); //doesn't need additional loops if you want to just print
    for(int j=0;j<4;j++){       //rotated array.
        printf("%d " ,Motion[j+1]);
    }

    printf("%d",Motion[0]);
     return 0;

}

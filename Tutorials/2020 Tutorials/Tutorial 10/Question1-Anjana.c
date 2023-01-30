#include <stdio.h>


int main()
{
    int marks[10], n=10, sum = 0, mean;
    int a;

     for(int i=0; i<n; ++i){
          printf("Enter number%d: ",i+1);
          scanf("%d", &a);
          if(a<20 && a>0){
            marks[i]=a;
          }
     }

    for(int j=0;j<n;j++){
        sum+=marks[j];
    }

     mean = sum/n;
     printf("mean = %d\n", mean);



     for(int k=0;k<n;k++){

            if(marks[k]>mean){
                printf("indexes of the students with more than the mean: %d\n", k);}
     }



     return 0;
}

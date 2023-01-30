#include <stdio.h>

int main()
{
    char stAnswer[3][5]={'0'};
    char a;

    for(int i=0;i<3;i++){
        printf("Student %d:\n",i+1);

        for(int j=0;j<5;j++){
            printf("Answer for question %d: ",j+1);
            scanf(" %c",&a);

            if(a=='t' || a=='T' || a=='f' || a=='F')
                a=stAnswer[i][j];
            else{
                printf("re-enter the value\n");
                j-=1;
            }
        }
        printf("\n");
    }

    return 0;
}

#include <stdio.h>

int main()
{
    char stAnswer[3][5];
    char AS[5] = {'F','F','T','T','F'};
    char as[5] = {'f','f','t','t','f'};
    char a;

    for(int i=0;i<3;i++){
        printf("Student %d:\n",i+1);

        for(int j=0;j<5;j++){
            printf("Answer for question %d: ",j+1);
            scanf(" %c",&a);
            if(a=='t' || a=='T' || a=='f' || a=='F')
                stAnswer[i][j]=a;
            else{
                printf("re-enter the value\n");
                j-=1;
            }
        }
        printf("\n");
    }

    for(int i=0;i<3;i++){
        int c=0;
        for(int j=0;j<5;j++){
            if(stAnswer[i][j]==as[j] || stAnswer[i][j]==AS[j]){
                c+=1;
            }
        }
        printf("Student %d correct answers %d\n",i+1,c);
    }

    return 0;
}

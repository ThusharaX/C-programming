#include <stdio.h>


int main()
{
    int a[4][4]={{5,7,8,10},{9,3,0,6},{8,1,9,2},{4,7,2,1}};
    int b[4][4]={{2,2,1,3},{8,1,3,1},{1,2,2,4},{3,1,1,2}};
    int c[4][4];

    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            c[i][j]=a[i][j]+b[i][j];
        }
    }

    for(int k=0;k<4;k++){
        for(int l=0;l<4;l++)
            printf("%d ",c[k][l]);
        printf("\n");
    }

    return 0;

}

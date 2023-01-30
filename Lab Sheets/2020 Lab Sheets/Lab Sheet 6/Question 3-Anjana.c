#include <stdio.h>

int main()
{
    int a=0;
    int arr1[3][3];
    int arr2[3][3];

    for(int i=0;i<3;i++){//storing to arr1
        for(int j=0;j<3;j++){
            scanf("%d",&arr1[i][j]);
            arr2[j][i]= arr1[i][j];//storing the transpose of arr1 to arr2
        }
    }

    return 0;
}

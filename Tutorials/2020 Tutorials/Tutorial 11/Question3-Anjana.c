#include <stdio.h>

int main()
{
    int a[4][5]={0};
    int s,p,d;
    int b=1;
    int i;
    int j;

    while(b==1){
    printf("sales person number: ");
    scanf("%d",&s);
    printf("product number: ");
    scanf("%d",&p);
    printf("total dollar value: ");
    scanf("%d",&d);
    a[s-1][p-1]=d;

    printf("If you want to enter more, enter 1, else 0: ");
    scanf("%d",&b);
    printf("\n");
    }

    for(i=0;i<4;i++){
        for(j=0;j<5;j++)
            printf("%d person's %d product sales %d$\n",(i+1),(j+1),a[i][j]);
        printf("\n");
    }

    return 0;
}

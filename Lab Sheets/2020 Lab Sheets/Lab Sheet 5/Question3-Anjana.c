#include <stdio.h>

int main()
{
    int b[9]={0};
    int s=0;
    int c;

    while(s!=(-1)){
    printf("Enter Salary: ");
    scanf("%d",&s);

    if(s==(-1))
        break;

    if(s>1000)
        b[8]+=1;
    else{
        c=((s/100)-2);
        b[c]+=1;
    }
    }

    for(int i=0;i<9;i++)//jsut printing the array
        printf("%c)   %d\n",(97+i),b[i]);

    return 0;
}



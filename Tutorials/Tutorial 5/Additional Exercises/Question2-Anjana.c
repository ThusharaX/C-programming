#include <stdio.h>
#include <stdlib.h>


int main()
{

    int a;
    int t=0;
    int i;
    
    for(i = 1; i < 4; i++) {
        printf("Enter fee for bus %d: ",i);
        scanf("%d", &a);
        t += a;
    }
    
    printf(" traveling expenditure for the semester %d: ",t*2*120);

    return 0;
}

// Thushara Thiwanka
#include <stdio.h>

int main(void) {

    float ballSize = 0;
    float size[3][5];
    float avgSize[3];
    int i, j;
    float avg = 0, temp = 0;

    for(i = 0; i < 3; i++) {
        printf("Input for Machine %d\n", i+1);
        for(j = 0; j < 5; j++) {
            printf("\tSize : ");
            scanf("%f", &ballSize);
            size[i][j] = ballSize;
        }
    }
    
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 5; j++) {
            temp += size[i][j];
        }
        avg = temp / 5;
        avgSize[i] = avg;
        temp = 0;
    }

    for(i = 0; i < 3; i ++) {
        printf("Machine %d average size = %f\n", i+1, avgSize[i]);
    }
    
    return 0;
}

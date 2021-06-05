#include <stdio.h>

int main(void) {

    float temp[2][3];
    float avgTemp[2];
    int i = 0, j = 0;
    float t = 0, avg = 0;

    for(i = 0; i < 2; i++) {
        printf("City %d\n", i+1);
        for(j = 0; j < 3; j++) {
            printf("\tTemperature : ");
            scanf("%f", &temp[i][j]);
        }
    }

    for(i = 0; i < 2; i++) {
        for(j = 0; j < 3; j++) {
            t += temp[i][j];
        }
        avg = t / 3;
        avgTemp[i] = avg;
        t = 0;
    }

    for(i = 0; i < 2; i ++) {
        printf("\nCity %d average temperature = %.2f\n", i+1, avgTemp[i]);
    }
    
    return 0;
}

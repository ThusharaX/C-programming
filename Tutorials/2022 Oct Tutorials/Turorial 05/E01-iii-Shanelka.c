#include <stdio.h>

int main() {
    float num = 0;
    int count = 0;
    float sum = 0;
    float avg = 0;

    while(num >= 0) {
        printf("Enter Number, Minus to end : ");
        scanf("%f", &num);
        if (num >= 0) {
            sum += num;
            count++;
            avg = sum / (float)count;
        }
    }
    printf("\nTotal of %.2d numbers %.2f\n", count, sum);
    printf("Average of %.2d numbers %.2f\n\n", count, avg);
    return 0;
}
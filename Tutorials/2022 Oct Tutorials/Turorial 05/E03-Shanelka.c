#include <stdio.h>

//defined struct as student
struct student {
    char name[20];
    float module[4];
    float total;
} student[3];

int main()
{
    //defind variables
    int countS = 0, countM = 0;
    float max;
    char maxName;

    //loop for student count
    while (countS < 3) {
        printf("Enter student name : ");
        scanf("%s", student[countS].name);
        //loop for module count
        while (countM < 4) {
            printf("Enter Module %d marks : ", countM + 1);
            scanf("%f", &student[countS].module[countM]);
            student[countS].total += student[countS].module[countM];
            countM++;
        }
        printf("\n");
        // find max
        if (max < student[countS].module[countM]) {
            max = student[countS].module[countM];
            maxName = countS;
        }
        countS++;
        countM = 0; // reset module counter
    }

    //loop process for output
    countS = 0; //reset countS for below loop process
    while(countS < 3) {
        printf("Student Name : %s\n", student[countS].name);
        while(countM < 4) {
            printf("Module %d Marks : %.2f\n", 1 + countM, student[countS].module[countM]);
            countM++;
        }
        printf("%s\'s total marks = %.2f\n", student[countS].name, student[countS].total);
        printf("\n");
        countM = 0;
        countS++;
    }

    printf("%s got highest mark. Total is %.2f", student[maxName].name, max);
    return 0;
}
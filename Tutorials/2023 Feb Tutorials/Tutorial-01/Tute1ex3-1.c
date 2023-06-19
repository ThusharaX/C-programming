// Exercise 3 - 2
// Traveling Expenditure Calculator

#include <stdio.h>

int main(void)
{
    int bus1, bus2, bus3, expenditure; //declaration

    //initialize
    bus1 = 50; // bus1 fare
    bus2 = 60; // bus2 fare
    bus3 = 70; // bus3 fare

    expenditure = (bus1 + bus2 + bus3) * 5 * 14; // Calculate expenditure for semester

    printf("Bus 01 fare = Rs.%d\n", bus1);
    printf("Bus 02 fare = Rs.%d\n", bus2);
    printf("Bus 03 fare = Rs.%d\n", bus3);
    printf("Traveling Expenditure for Entire semester = Rs.%d\n", expenditure);

    return 0;
}

// Method 2 - Using Functions

// int expend(int bus1, int bus2, int bus3)
// {
//     int e;
//     e = (bus1 + bus2 + bus3) * 5 * 14;
//     return e;
// }

// int main(void)
// {
//     int bus1, bus2, bus3;

//     printf("enter buses fare: ");
//     scanf("%d%d%d", &bus1, &bus2, &bus3);
//     printf("Traveling Expenditure for Entire semester = %d\n", expend(bus1, bus2, bus3));

//     return 0;
// }

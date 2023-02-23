#include <stdio.h>
#include <assert.h>
#include <math.h>

// function declaration
float calcRemainingFuel (int vehicleType, float usedFuelQuota);
float calcFuelCost (int vehicleType, float usedFuelQuota);
void displayDetails (int vType, float usedFuelQuota, float remainingQuota, float cost);

// start the main function
int main(void) {
    // local variable declaration
    int vType; // vehicle type
    float usedFuelQuota, remainingQuota, cost;

    // calcRemainingFuel check with assert
    assert(fabs(calcRemainingFuel(1, 2) - 3) < 0.01);
    assert(fabs(calcRemainingFuel(2, 10) - 10) < 0.01);

    // get input from user with loop
    do {
        printf("Enter your vehicle type (1, 2, 3, 4) : ");
        scanf("%d", &vType);

        //check valid or invalid vehicle type
        if ((vType < 5) && (vType > 0)) {
            printf("Enter used quota : ");
            scanf("%f", &usedFuelQuota);

            remainingQuota = calcRemainingFuel (vType, usedFuelQuota);
            cost = calcFuelCost (vType, usedFuelQuota);

            // display details
            displayDetails (vType, usedFuelQuota, remainingQuota, cost);
        }
        else {
            printf("Invalid vehicle type. Please enter valid type (1, 2, 3, 4)\n");
        }
    } while ((vType != -1) || ((vType > 5) && (vType < 0)));

    return 0;
}

// function implementation
float calcRemainingFuel (int vehicleType, float usedFuelQuota) {
    // local variable declaration
    float remainingFuelQuota;
    float allowedFuelQuota;

    // check weekly allowed quota
    switch (vehicleType) {
        case 1: {
            allowedFuelQuota = 5;
            break;
        }
        case 2: {
            allowedFuelQuota = 20;
            break;
        }
        case 3: {
            allowedFuelQuota = 20;
            break;
        }
        case 4: {
            allowedFuelQuota = 30;
            break;
        }
    }
    
    remainingFuelQuota = allowedFuelQuota - usedFuelQuota; // return fuel quota

    return remainingFuelQuota;
}

float calcFuelCost (int vehicleType, float usedFuelQuota) {
    // local variable declaration
    float fuelCost;
    float pricePerLitre;

    // check price per litre
    if ((vehicleType == 1) || (vehicleType == 2) || (vehicleType == 4)) {
        pricePerLitre = 370;
    }
    else if (vehicleType == 3) {
        pricePerLitre = 510;
    }

    fuelCost = usedFuelQuota * pricePerLitre;

    return fuelCost;
}

void displayDetails (int vType, float usedFuelQuota, float remainingQuota, float cost) {
    printf("Vehicle type\tQuota used\tQuota Remaining\tFuel Cost\n");
    printf("%d\t\t%.2f\t\t%.2f\t\t%.2f\n", vType, usedFuelQuota, remainingQuota, cost);
}
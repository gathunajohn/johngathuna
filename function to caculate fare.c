/*
Name:John Gathuna
Reg No:CT100/G/22448/24
Description:function to calculate fare
*/
#include <stdio.h>

// Function to calculate fare
float calculateFare(float distance) {
    float fare;
    fare = distance * 50;  // Fare rate is KSh. 50 per kilometer
    return fare;
}

int main() {
    float distance, totalFare;

    printf("Enter distance traveled (in kilometers): ");
    scanf("%f", &distance);

    totalFare = calculateFare(distance);

    printf("Total fare: KSh. %.2f\n", totalFare);

    return 0;
}

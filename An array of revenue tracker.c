/*
Name:John Gathuna
Reg No:CT100/G/22448/24
Description:An array of weekly revenue tracker
*/

#include <stdio.h>

int main() {
    float revenue[7];  // 1D array to store revenue for 7 days
    float total = 0, average;
    int i;

    // Input revenue for each day
    printf("Enter the revenue for each day of the week:\n");
    for(i = 0; i < 7; i++) {
        printf("Day %d: ", i + 1);
        scanf("%f", &revenue[i]);
        total += revenue[i];  // Add to total while inputting
    }

    // Calculate average revenue
    average = total / 7;

    // Display results
    printf("\nTotal weekly revenue: %.2f\n", total);
    printf("Average daily revenue: %.2f\n", average);

    return 0;
}

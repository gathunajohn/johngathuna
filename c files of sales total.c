/*
Name:John Gathuna
Reg No:CT100/G/22448/24
Description:c program of sales total
*/

#include <stdio.h>

int main() {
    FILE *file;
    float amount, total = 0.0;

    // Open the file for reading
    file = fopen("sales.txt", "r");

    // Check if file exists or opened successfully
    if (file == NULL) {
        printf("Error: Could not open file 'sales.txt'\n");
        return 1;
    }

    // Read all transactions and calculate total
    while (fscanf(file, "%f", &amount) == 1) {
        total += amount;
    }

    // Display the total sales for the day
    printf("Total sales for the day: %.2f\n", total);

    // Close the file
    fclose(file);

    return 0;
}

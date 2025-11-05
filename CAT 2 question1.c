/*
Name:John Gathuna
Reg No:CT100/G/22448/24
Description:A program of an array	
*/

#include <stdio.h>

int main() {
    // II. Declare and initialize the 4x2 2D array
    int scores[4][2] = {
        {65, 92},  // Row 0
        {84, 72},  // Row 1
        {35, 70},  // Row 2
        {59, 67}   // Row 3
    };
    
    // Define the number of rows and columns for clarity
    int rows = 4;
    int cols = 2;
    
    printf("Elements of the scores array (4x2):\n");
    
    // III. Print the elements using a nested for loop
    for (int i = 0; i < rows; i++) { // Outer loop for rows
        for (int j = 0; j < cols; j++) { // Inner loop for columns
            // Print the element at current row (i) and column (j)
            printf("%d\t", scores[i][j]); 
        }
        // Print a newline character after each row is completed
        printf("\n"); 
    }
    
    return 0;
}
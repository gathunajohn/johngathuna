/*
Name:John Gathuna
Reg No:CT100/G/22448/24
Description:function in c program
*/

#include <stdio.h>
#include <stdlib.h> // Required for exit()

// Function 1: Prompts the user for 10 integers and writes them to "input.txt"
void write_input_file() {
    FILE *file_ptr;
    int number;

    // Open the file in write mode ("w"). 
    // If the file exists, its contents are truncated.
    file_ptr = fopen("input.txt", "w");
    
    // 4. Ensure appropriate error handling
    if (file_ptr == NULL) {
        perror("Error opening input.txt for writing");
        // Exit the program if file cannot be opened
        exit(EXIT_FAILURE); 
    }

    printf("--- Task 1: Writing to input.txt ---\n");
    printf("Please enter 10 integers:\n");

    for (int i = 0; i < 10; i++) {
        printf("Enter integer #%d: ", i + 1);
        
        // Read the integer from the user
        if (scanf("%d", &number) != 1) {
            printf("Invalid input. Please enter an integer.\n");
            // Clear the input buffer to prevent infinite loops
            while (getchar() != '\n'); 
            i--; // Decrement i to re-read the same number
            continue;
        }

        // Write the integer to the file, followed by a newline
        fprintf(file_ptr, "%d\n", number);
    }

    // Close the file
    fclose(file_ptr);
    printf("Successfully wrote 10 integers to input.txt.\n\n");
}

// Function 2: Reads integers from "input.txt", calculates sum/average, and writes to "output.txt"
void process_and_write_output() {
    FILE *input_file, *output_file;
    int number;
    int sum = 0;
    int count = 0;
    double average = 0.0;

    // Open "input.txt" in read mode ("r")
    input_file = fopen("input.txt", "r");
    if (input_file == NULL) {
        perror("Error opening input.txt for reading");
        return; // Return without processing if the file cannot be opened
    }

    // Open "output.txt" in write mode ("w")
    output_file = fopen("output.txt", "w");
    if (output_file == NULL) {
        perror("Error opening output.txt for writing");
        fclose(input_file); // Ensure the input file is closed before exiting
        return;
    }

    // Read integers from the input file until the end-of-file (EOF) is reached
    while (fscanf(input_file, "%d", &number) == 1) {
        sum += number;
        count++;
    }

    // Check if any numbers were read
    if (count > 0) {
        average = (double)sum / count;
    } else {
        // Handle the case where the input file was empty or had non-integer data
        fprintf(output_file, "Error: No valid integers found in input.txt.\n");
        printf("Error: No valid integers found in input.txt.\n");
    }

    // Write the results to the output file
    fprintf(output_file, "Total Count: %d\n", count);
    fprintf(output_file, "Sum: %d\n", sum);
    fprintf(output_file, "Average: %.2f\n", average);

    // Close both files
    fclose(input_file);
    fclose(output_file);
    printf("--- Task 2: Processing Complete ---\n");
    printf("Calculated sum (%d) and average (%.2f) and wrote to output.txt.\n\n", sum, average);
}

// Function 3: Reads and displays the contents of both files in a formatted manner
void display_file_contents(const char *filename) {
    FILE *file_ptr;
    int c; // Use int for fgetc to handle EOF correctly

    file_ptr = fopen(filename, "r");
    if (file_ptr == NULL) {
        perror("Error opening file for display");
        printf("Could not display the contents of %s.\n", filename);
        return;
    }

    printf("--- Contents of **%s** ---\n", filename);
    
    // Read and print character by character until EOF
    while ((c = fgetc(file_ptr)) != EOF) {
        putchar(c);
    }
    
    // Handle read errors (though fgetc usually handles it, a more robust check)
    if (ferror(file_ptr)) {
        perror("Error reading from file");
    }
    
    printf("--------------------------------\n");

    fclose(file_ptr);
}

int main() {
    
    // 1. Write the function to prompt for 10 integers and store them in "input.txt"
    write_input_file();
    
    // 2. Write the function to process "input.txt" and write results to "output.txt"
    process_and_write_output();
    
    // 3. Write the function to read and display the contents
    display_file_contents("input.txt");
    display_file_contents("output.txt");

    return 0;
}
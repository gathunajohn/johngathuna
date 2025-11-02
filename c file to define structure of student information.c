/*
Name:John Gathuna
Reg No:CT100/G/22448/24
Description:program to define a structure of student information
*/

#include <stdio.h>
#include <stdlib.h>

// Define structure to hold student information
struct Student {
    char name[50];
    char regNo[20];
    float totalMarks;
};

int main() {
    FILE *fp;
    struct Student s;

    // Open the binary file for reading
    fp = fopen("results.dat", "rb");
    if (fp == NULL) {
        printf("Error opening file.\n");
        exit(1);
    }

    printf("Student Results:\n");
    printf("------------------------------\n");

    // Read and display each record
    while (fread(&s, sizeof(struct Student), 1, fp) == 1) {
        printf("Name: %s\n", s.name);
        printf("Total Marks: %.2f\n\n", s.totalMarks);
    }

    fclose(fp);
    return 0;
}

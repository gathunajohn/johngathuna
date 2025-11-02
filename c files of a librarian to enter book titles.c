/*
Name:John Gathuna
Reg No:CT100/G/22448/24
Description:program of c files of a library
*/

#include <stdio.h>

int main() {
    FILE *fp;
    char bookTitle[100];

    // Open the file in append mode so that existing records are not deleted
    fp = fopen("borrowed_books.txt", "a");

    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter the title of the borrowed book: ");
    fgets(bookTitle, sizeof(bookTitle), stdin);

    // Write the book title to the file
    fprintf(fp, "%s", bookTitle);

    // Close the file
    fclose(fp);

    printf("Book title successfully stored in borrowed_books.txt\n");

    return 0;
}

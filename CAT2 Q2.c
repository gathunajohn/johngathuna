/*
Name:John Gathuna
Reg No:CT100/G/22448/24
Description:program to request the user to enter hours worked
*/

#include <stdio.h>

// Define constants for clarity and easy modification
#define REGULAR_HOURS 40.0
#define OVERTIME_RATE 1.5
#define FIRST_TAX_BRACKET_LIMIT 600.00
#define FIRST_TAX_RATE 0.15 // 15%
#define SECOND_TAX_RATE 0.20 // 20%

int main() {
    // Declare variables to store inputs and results
    float hoursWorked, hourlyWage;
    float grossPay, totalTax, netPay;
    float regularPay, overtimeHours, overtimePay;

    // 1. Request user input
    printf("--- Payroll Calculator ---\n");
    printf("Enter the hours worked in a week: ");
    scanf("%f", &hoursWorked);
    
    printf("Enter the hourly wage: $");
    scanf("%f", &hourlyWage);

    // --- 2. Calculate Gross Pay ---
    if (hoursWorked <= REGULAR_HOURS) {
        // No overtime
        regularPay = hoursWorked * hourlyWage;
        overtimeHours = 0.0;
        overtimePay = 0.0;
        grossPay = regularPay;
    } else {
        // With overtime (time and a half)
        regularPay = REGULAR_HOURS * hourlyWage;
        overtimeHours = hoursWorked - REGULAR_HOURS;
        overtimePay = overtimeHours * hourlyWage * OVERTIME_RATE;
        grossPay = regularPay + overtimePay;
    }

    // --- 3. Calculate Taxes (Progressive Rate) ---
    float taxOnFirstBracket;
    float taxOnRest;
    
    if (grossPay <= FIRST_TAX_BRACKET_LIMIT) {
        // All income is in the first bracket (15%)
        taxOnFirstBracket = grossPay * FIRST_TAX_RATE;
        taxOnRest = 0.0;
    } else {
        // Income is split into two brackets
        // a. Tax on the first $600 at 15%
        taxOnFirstBracket = FIRST_TAX_BRACKET_LIMIT * FIRST_TAX_RATE; // 600 * 0.15 = 90.00
        
        // b. Tax on the remaining amount at 20%
        float taxableRest = grossPay - FIRST_TAX_BRACKET_LIMIT;
        taxOnRest = taxableRest * SECOND_TAX_RATE;
    }

    totalTax = taxOnFirstBracket + taxOnRest;

    // --- 4. Calculate Net Pay ---
    netPay = grossPay - totalTax;

    // --- 5. Print the results ---
    printf("\n--- Payroll Summary ---\n");
    printf("Total Hours Worked: %.2f\n", hoursWorked);
    printf("Hourly Wage: $%.2f\n", hourlyWage);
    printf("--------------------------\n");
    printf("Gross Pay: \t$%.2f\n", grossPay);
    printf("Total Taxes: \t$%.2f\n", totalTax);
    printf("Net Pay: \t$%.2f\n", netPay);
    printf("--------------------------\n");

    return 0;
}
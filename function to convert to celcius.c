/*
Name:John Gathuna
Reg No:CT100/G/22448/24
Description:program to function named convert tocelsius
*/
#include <stdio.h>

// Function to convert Fahrenheit to Celsius
float convertToCelsius(float fahrenheit) {
    float celsius;
    celsius = (fahrenheit - 32) * 5 / 9;
    return celsius;
}

int main() {
    float fahrenheit, celsius;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = convertToCelsius(fahrenheit);

    printf("Temperature in Celsius: %.2f°C\n", celsius);

    return 0;
}

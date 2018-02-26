// Chapter 1 of the book.

#include <stdio.h>

// Using symbolic constants. 
#define LOWER   0
#define UPPER   300
#define STEP    20

// My first C program.
int main()
{
    printf("Hello, world!\n");
    printf("This is my first C program. \n");
    printf("It prints a Fahrenheit/Celsius temperatures table. \n");

    float fahr, celsius;

    printf("----------\n");
    printf("Fahrenheit\nto Celsius\nconversion\ntable\n");
    printf("----------\n");
    printf("%3s\t%6s\n", "f", "c");
    printf("----------\n");
    fahr = LOWER;
    while (fahr <= UPPER)
    {
        celsius = 5.0 * (fahr - 32.0) / 9.0;
        printf("%3.0f\t%6.1f\n", fahr, celsius);
        fahr = fahr + STEP;
    }

    int lower, upper, step;
    lower = -20;
    upper = 150;
    step = 10;
    printf("\n----------\n");
    printf("Celsius to\nFahrenheit\nconversion\ntable\n");
    printf("----------\n");
    printf("%3s\t%6s\n", "c", "f");
    printf("----------\n");
    celsius = lower;
    while (celsius <= upper)
    {
        fahr = (celsius * 9.0) / 5.0 + 32.0;
        printf("%3.0f\t%6.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
    printf("----------\n");

    printf("\n%3s\t%6s\n", "f", "c");
    printf("----------\n");
    float intFahr;
    for (intFahr = UPPER; intFahr >= LOWER; intFahr = intFahr - STEP)
    {
        printf("%3.0f\t%6.1f\n", intFahr, 5 * (intFahr - 32) / 9);
    }
    printf("----------\n");
}
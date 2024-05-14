#include <stdio.h>

/* print Fahrenheit-Celsius table
    for fahr = 0, 20, ..., 300 */

main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;         /* Lower bound of table */ 
    upper = 300;       /* Upper bound of table */
    step = 20;         /* Increment size       */

    fahr = lower;

    printf("--- Fahrenheit to Celsius Table ---\n");

    while (fahr <= upper)
    {
        celsius = (5.0/9.0) * (fahr - 32.0);
        printf("%3.0f\t %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }

    celsius = lower;

    printf("\n--- Celsius to Fahrenheit Table ---\n");

    while (celsius <= upper)
    {
        fahr = (9.0/5.0) * celsius + 32.0;
        printf("%3.0f\t %6.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
}
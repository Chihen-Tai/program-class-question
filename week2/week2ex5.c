#include <stdio.h>
#define STEP 10
#define LOWER 0
#define UPPER 100
int main()
{
    int fahr, celsius;
    printf("Celsisu    Fahrenheit\n");
    printf("---------------------");
    celsius = LOWER;
    while (celsius <= UPPER)
    {
        fahr = 1.8 * celsius + 32;
        printf("%4d %12d\n", celsius, fahr);
        celsius = celsius + STEP;
    }
    printf("---------------------");
    return 0;
}

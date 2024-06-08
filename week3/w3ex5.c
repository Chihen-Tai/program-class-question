#include <stdio.h>
int main()
{
    int num, div;
    int isPrime = 1;

    printf("Please enter an interger (q to quit) : \n");

    scanf("%d", &num);
    for (div = 2; div * div <= num; div++)
    {
        if (num % div == 0)
        {
            printf("%d,", div);
            isPrime = 0;
        }
    }

    for (div-=2; div >= 2; div--)
    {
        if (num % div == 0&&div*div!=num)
        {
            printf("%d,", num / div);
            isPrime=0;
        }
    }
    if (isPrime == 1)
    {
        printf("%d is prime.\n", num);
    }
    else
    {
        printf("are divistor of %d\n", num);
    }

    return 0;
}
#include <stdio.h>
#define MAX_SIZE 50000
#define LOWER_LIMIT 0
#define UPPER_LIMIT 1000000
int main(int argc, char *argv[])
{
    /*區別在於前者是一個字串陣列
    （或者說是一個指向字串的指標的陣列）
    而後者是一個單一的字串*/
    int data[MAX_SIZE];
    int i, j, size, k;
    int maxval = LOWER_LIMIT;
    int minval = UPPER_LIMIT;

    FILE *fin;
    FILE *fout;
    fin = fopen(argv[1], "r");
    fout = fopen(argv[2], "w");

    for (i = 0; i < argc; i++)
    {
        printf("the %dth argument is %s\n", i, argv[i]);
    }

    fscanf(fin, "%d", &size);
    for (k = 0; k < size; k++)
    {
        if (fscanf(fin, "%d", &data[k]) != 1)
        {
            break;
        }
    }
    for (i = 0, j = size - 1; i <= j; i++, j--)
    {
        if (data[i] < data[j])
        {
            if (minval > data[i])
            {
                minval = data[i];
            }
            if (maxval < data[j])
            {
                maxval = data[j];
            }
        }
        else
        {
            if (maxval < data[i])
            {
                maxval = data[i];
            }
            if (minval > data[j])
            {
                minval = data[j];
            }
        }
    }
    fprintf(fout, "%d %d\n", minval, maxval);
    fclose(fin);
    fclose(fout);

    return 0;
}
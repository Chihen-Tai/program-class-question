#include <stdio.h>
#include <string.h>
char input[23], to_print[23];

int k, n; // Initialize n with a value
void re(int pos)
{
    if (pos == k)
    {
        to_print[pos] = '\0';
        printf("%s\n", to_print);
        return;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           
            to_print[pos] = input[i];
            re(pos + 1);
        }
    }
}
int main()
{
    scanf("%s", input);
    scanf("%d", &k);
    n = strlen(input);
    re(0);
}
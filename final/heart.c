#include <stdio.h>
char output[33];
float f;
int main()
{
   
    while (scanf("%f",&f) != EOF)
    {
        output[32] = '\0';
        
        unsigned int u = *((unsigned int *)&f);
        for (int i = 31; i >= 0; i--)
        {
            if (u % 2 == 0)
                output[i] = '0';
            else
                output[i] = '1';
            u =u>> 1;
        }
        printf("%s\n", output);
    }
}
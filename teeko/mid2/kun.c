#include <stdio.h>
#include <string.h>
char count[26]={0};
int a[30];
int main()
{
    int n;
    scanf("%d", &n);
    
    if(n>26)
    {
        printf("I'm the god of Knuckles!\n");
    }
    else if(n==1)
    {
        printf("I'm the god of Knuckles!\n");

    }
    else
    {
        scanf("%s",count);
        for(int i=0;i<n;i++)
        {
            a[count[i]-96]++;
            
        }
        for(int i=0;i<n;i++)
        {
            if(a[i]>1)
            {
                printf("I'm the god of Knuckles!\n");
                return 0;
                break;
            }
        }
        for(int i=0;i<n;i++)
        {
            if(a[i]<2)
            {
                printf("Different makes perfect\n");
                return 0;
                break;
            }
        }
        
       
    }
}
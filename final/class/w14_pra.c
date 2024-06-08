# include <stdio.h>
# include <stdlib.h>

int main()
{
    int ii,max;

    FILE *random;
    random=fopen("number.txt","w");

    printf("How many number do you want?\n");
    scanf("%d",&max);
    for(ii=0;ii<max;ii++){
        fprintf(random,"%d\n",rand()%1000000);
    }

    fclose(random);
    return 0;
}
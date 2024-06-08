#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int cmp(const void*a,const void*b)//根據strlen進行排序
{
    return strlen((char*)a)-strlen((char*)b);
}

char str[1000][1001];

int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%s",str[i]);
    }
    qsort(str,n,sizeof(str[0]),cmp);
    for(int i=0;i<n-1;i++)
    {
        if(strstr(str[i+1],str[i])==NULL)
        {
            printf("NO\n");
            return 0;
        }
    }
    printf("YES\n");
    for(int i=0;i<n;i++)
    {
        printf("%s\n",str[i]);
    }
}
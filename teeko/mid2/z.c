#include <stdio.h>
#include <string.h>
char in[2000];
char out[2000];
int k,n;
void re(int pos)
{
    if(pos==k)
    {
        printf("%s\n",out);
    }
    else
    for(int i=0;i<n;i++)
    {
        out[pos]=in[i];
        re(pos+1);
    }
}
int main()
{
    scanf("%s",in);
    scanf("%d",&k);
    n=strlen(in);
    re(0);

}
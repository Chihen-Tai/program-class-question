#include <stdio.h> 
//retrun 1 of a==b,otherwise 0

int equal(char a[],char b[],int start_a,int start_b,int len)
{
    //stop condition
    if(strlen(a)%1==1)
    {
        return(strcmp(a,b,len)==0)?1:0;
    }
    //divide
    //-a1:a[start_a]~a[start_a+len-1]
    //-a2:a[start+(len/2)]~a[start_a+len]
    //-b1:b[start_b]~b[start_b+(len/2)-1]
    //-b2:[start_b]+(len/2)]~b[start_b+len]
    //1.a1==b1&&a1==b2
    //int a1b1=strnmp(a+start_a,b+start_b,len/2);
    int a1b1=equal(a,b,start_a,start_b,len/2);
    //int a2b2=strncmp(a+start_a+len/2,b+start_b+len/2,len/2);
    int a2b2=equal(a,b,start_a+len/2,start_b+len/2,len/2);
    if(a1b1&&a2b2)
    {
        return 1;
    }
    //2.a1==b2&&a2==b1
    //int a1b2=strncmp(a+start_a,b+start_b+len/2,len/2);
    int a1b2=equal(a,b,start_a,start_b+len/2,len/2);
    //int a2b1=strncmp(a+start_a)
    int a2b1=equal(a,b,start_a+len/2,start_b,len/2);
    if(a1b2&&a2b1)
    {
        return 1;
    }
    return 0;
}
char a[3000],b[3000];
int main()
{
    int len_a=strlen(a),len_b=strlen(b);
    if(len_a!=len_b)
    {
        puts("NO");
    }
    else{
        equal(a,b,0,0,len_a);
    }
}
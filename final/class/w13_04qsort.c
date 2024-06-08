// qsort() function example
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 10

int compare_str_ptr(const void *a, const void *b)
{
    char **pa;
    char **pb;
    pa = (char **) a;
    pb = (char **) b;
    return strcmp(*pa, *pb);
}

int main(void)
{
    char strs[SIZE][4] ={
        "aab", "abc", "aaa", "abb", "acb",
        "aab", "abc", "aaa", "abb", "acb"
    };
    char *ptrs[SIZE];
    int i;

    printf("strs: ");
    for (i=0; i<SIZE; i++) {
        printf("%s0|", strs[i]);
    }
    printf("\n");

    for (i=0; i<SIZE; i++) {
        ptrs[i] = strs[i];
    }

    printf("ptrs: ");
    for (i=0; i<SIZE; i++) {
        printf("%p|", ptrs[i]);
    }
    printf("\nafter sorting\n");

    qsort(ptrs, SIZE, sizeof(char*), compare_str_ptr);

    printf("ptrs: ");
    for (i=0; i<SIZE; i++) {
        printf("%p|", ptrs[i]);
    }
    printf("\n");

    printf("ptrs: ");
    for (i=0; i<SIZE; i++) {
        printf("%s0|", ptrs[i]);
    }
    printf("\n");

    printf("strs: ");
    for (i=0; i<SIZE; i++) {
        printf("%s0|", strs[i]);
    }

    return 0;
}
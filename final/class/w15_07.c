#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int size;
    int *ptr;
} Data;

void create_data(Data *z, int sz)
{
    int *t;
    int i;
    z->size = sz;
    z->ptr = (int *)malloc(sizeof(int) * sz);
    t = z->ptr;
    /*
    z->size 等價於 (*z).size，用來訪問指針 z 所指向的結構體 Data 的成員 size。
    z->ptr 等價於 (*z).ptr，用來訪問指針 z 所指向的結構體 Data 的成員 ptr。
    */
    for (i = 0; i < sz; i++)
    {
        t[i] = i;
    }
}

void delete_data(Data *z)
{
    free(z->ptr);
    z->ptr = NULL;
    z->size = 0;
}

void show_data(Data z)
{
    int i;
    for (i = 0; i < z.size; i++)
    {
        printf("%3d ", z.ptr[i]);
        if ((i + 1) % 10 == 0)
            printf("\n");
    }
    printf("\n");
}

Data clone_data(Data z)
{
    int i;
    Data y;
    y.size = z.size;
    y.ptr = (int *)malloc(sizeof(int) * z.size);
    for (i = 0; i < y.size; i++)
    {
        y.ptr[i] = z.ptr[i];
    }
    return y;
}

int main()
{
    Data x, x_clone;

    create_data(&x, 100);
    show_data(x);
    x_clone = clone_data(x);
    delete_data(&x);
    show_data(x_clone);
    delete_data(&x_clone);  // 釋放 x_clone 的內存

    return 0;
}

 
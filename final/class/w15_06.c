#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct
{
    double r;
    double i;
} Complex;

void set_complex(Complex *x, double a, double b)
{
    x->r = a; // 將 a 的值賦給了 x 所指向的複數結構中的實部成員 r
    x->i = b; // 將 b 的值賦給了 x 所指向的複數結構中的虛部成員 i
}
void show_complex(Complex *x)
{
    if(x->i>0)
    {
        printf("%f+%fi\n", x->r, x->i);
        return;
    }
    else
    {
        printf("%f%fi\n", x->r, x->i);
        return;
    }
    
}
void add(Complex *x, Complex *y, Complex *z)
{
    z->r = x->r + y->r;
    z->i = x->i + y->i;
}
void sub(Complex *x, Complex *y, Complex *z)
{
    z->r = x->r - y->r;
    z->i = x->i - y->i;
}
void mul(Complex *x, Complex *y, Complex *z)
{
    z->r = x->r * y->r - x->i * y->i;
    z->i = x->r * y->i + x->i * y->r;
}
int main()
{
    Complex x;
    Complex y, z;
    set_complex(&x, 1, 2); // x = 1 + 2i
    set_complex(&y, 2, -3); // y = 2 - 3i;
    add(&x, &y, &z);
    show_complex(&x);
    show_complex(&y);
    show_complex(&z);
    mul(&x, &y, &z);
    show_complex(&z);

    y = z;


    return 0;
}

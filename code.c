#include<stdio.h>

int main()
{
    int a = 10;
    int b = 20;

    float x = 12.5;

    int hex = 0x1A;
    int oct = 077;
    int bin = 0b1010;

    char ch = 'A';

    char str[] = "Hello World";

    if(a < b && b != 0)
    {
        a++;
        b--;

        if(a == 10 || b >= 20)
        {
            printf("Logical and Relational Operators\n");
        }
    }

    a = a + b;
    b = b - a;
    a = a * b;
    b = b / 2;
    a = a % 2;

    return 0;
}
#include <stdio.h>
#define NMAX 3

void swapValue(int *a, int *b, int *c);
void swapArray(int a[], int b[], int size);

int main()
{
    int a = 1, b = 2, c = 3;

    printf("Before swapValue: a=%d, b=%d, c=%d\n", a, b, c);
    swapValue(&a, &b, &c);
    printf("After  swapValue: a=%d, b=%d, c=%d\n", a, b, c);

    int a1[NMAX] = {1, 2, 3};
    int b1[NMAX] = {4, 5, 6};

    printf("\nBefore swapArray a: ");
    for(int i = 0; i < NMAX; i++)
        printf("%d ", a1[i]);

    printf("\nBefore swapArray b: ");
    for(int i = 0; i < NMAX; i++)
        printf("%d ", b1[i]);

    swapArray(a1, b1, NMAX);

    printf("\n\nAfter swapArray a: ");
    for(int i = 0; i < NMAX; i++)
        printf("%d ", a1[i]);

    printf("\nAfter swapArray b: ");
    for(int i = 0; i < NMAX; i++)
        printf("%d ", b1[i]);

    return 0;
}

void swapValue(int *a, int *b, int *c)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = *c;
    *c = temp;
}

void swapArray(int a[], int b[], int size)
{
    int temp;

    for(int i = 0; i < size; i++)
    {
        temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }
}

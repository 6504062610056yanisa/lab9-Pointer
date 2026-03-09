#include <stdio.h>
#define NMAX 10
// functions prototype
void inputArray(int array[], int N);
void showArray2D(int matrix[][10], int N);
void constructMatrix(int P[][10], int N, int A[], int B[]);
int main()
{
    int a[NMAX], b[NMAX], p[NMAX][NMAX], n;
    printf("Enter N =");
    scanf("%d", &n);
    printf("Input array A \n");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter %d integers: = ", n);
    inputArray(a, n);

    printf("\n");

    printf("Input array B \n");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
    }
    printf("Enter %d integers: = ", n);
    inputArray(b, n);

    printf("Matrix P \n");
    constructMatrix(p, n, a, b);

    showArray2D(p, n);

    return 0;
}
// functions definition
void inputArray(int array[], int N)
{
    for (int i = 0; i < N; i++)
    {
        printf(" %d", array[i]);
    }
}

void constructMatrix(int P[][10], int N, int A[], int B[])
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            P[i][j] = A[i] * B[j];
        }
    }
}

void showArray2D(int matrix[][10], int N)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}
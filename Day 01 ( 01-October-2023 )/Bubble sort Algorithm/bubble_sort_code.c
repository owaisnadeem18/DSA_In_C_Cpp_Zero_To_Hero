#include <stdio.h>

void print_Array(int *A, int n)
{

    for (int i = 0; i < n; i++)
    { // It will print the arrays in unsorted way

        printf("%d ", A[i]);
    }
    printf("\n");
}

void bubble_Sort(int *A, int n)
{

    int temp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        { // For Comparision in each

            if (A[j] > A[j + 1])
            {

                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }
}

int main()
{

    int A[] = {4, 9, 2, 98, 54, 12, 56, 41, 3};
    int n = 9;
    print_Array(A, n); // It will just print the arrays in unsorted way
    bubble_Sort(A, n);
    print_Array(A, n); // It will just print the arrays now in sorted way , because we have performed comparision operation here inside the bubble sort
    return 0;
}
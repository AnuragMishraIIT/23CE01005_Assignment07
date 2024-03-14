/*
    LAB ASSIGNMENT: 07
    Question number: 04

    Roll number: 23CE01005
    Name: Anurag Mishra
    Branch: Civil Engineering
    Date: 08/03/2024
*/

#include <stdio.h>

int max(int a, int b)
{
    return (a > b ? a : b);
}

int findMax(int A[], int n)
{
    if (n == 1)
    {
        return A[0];
    }
    else
    {
        return max(A[n - 1], findMax(A, n - 1));
    }
}
int main()
{
    int n, i;
    printf("Enter the number of elements in the array:\n");
    scanf("%d", &n);
    int array[n];
    printf("Enter the array elements one-by-one:\n");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("Largest in given array is %d", findMax(array, n));
    return 0;
}
#include <stdio.h>

int main()
{
    int a[5] = {3, 4, 1, 5, 2}; // Initialize the array
    int i, j, aux, min;         // Declare variables

    // Selection sort
    for (i = 0; i < 5; i++)
    {
        min = i; // Assume the current position is the minimum
        for (j = i + 1; j < 5; j++)
        {
            if (a[j] < a[min])
            {
                min = j; // Update the minimum position if a smaller element is found
            }
        }
        // Swap the found minimum element with the first element
        aux = a[i];
        a[i] = a[min];
        a[min] = aux;
    }

    // Print array in ascending order
    printf("Ascendente\n");
    for (i = 0; i < 5; i++)
    {
        printf("%i ", a[i]);
    }

    // Print array in descending order
    printf("\nDescendente\n");
    for (i = 4; i >= 0; i--)
    {
        printf("%i ", a[i]);
    }

    return 0; // Return 0 to indicate successful execution
}
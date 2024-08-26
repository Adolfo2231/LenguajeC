#include <stdio.h>
#include <stdio.h>

int main()
{
    int a[5] = {10, 46, 47, 24, 53}; // Initialize the array
    int i, pos, aux;                 // Declare variables

    // Insertion sort algorithm
    for (i = 0; i < 5; i++)
    {
        pos = i;    // Set position to current index
        aux = a[i]; // Store current element in aux
        // Shift elements to the right to make space for aux
        while ((pos > 0) && (aux < a[pos - 1]))
        {
            a[pos] = a[pos - 1];
            pos--;
        }
        a[pos] = aux; // Place aux in its correct position
    }

    // Print array in ascending order
    printf("Ascendente\n");
    for (i = 0; i < 5; i++)
    {
        printf("%i, ", a[i]);
    }

    // Print array in descending order
    printf("\nDescendente\n");
    for (i = 4; i >= 0; i--)
    {
        printf("%i, ", a[i]);
    }

    return 0; // Return 0 to indicate successful execution
}

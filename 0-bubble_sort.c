#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * bubble_sort - Sorts an array of integers in ascending order using Bubble Sort
 * @array: The array to be sorted
 * @size: Number of elements in the array
 */
void bubble_sort(int *array, size_t size)
{
    size_t i, j;
    int tmp;
    int swapped;

    if (!array || size < 2)
        return;

    for (i = 0; i < size - 1; i++)
    {
        swapped = 0; // Flag to check if any swaps were made in this pass

        for (j = 0; j < size - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                // Swap the elements
                tmp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = tmp;

                swapped = 1; // Set the swapped flag
            }
        }

        // If no two elements were swapped in inner loop, the array is already sorted
        if (swapped == 0)
            break;
    }
}

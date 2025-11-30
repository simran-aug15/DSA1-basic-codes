#include <stdio.h>

void selectionsort(int arr[], int size)
{
    int min, temp;
    for (int i = 0; i < size - 1; i++)
    {
        min = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[min])
                min = j;
        }

        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
}

void insertionsort(int arr[], int size)
{
    int i, j, key;
    for (i = 1; i < size; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

void bubblesort(int arr[], int size)
{
    int hold;
    for (int pass = 0; pass < size - 1; pass++)
    {
        for (int i = 0; i < size - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                hold = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = hold;
            }
        }
    }
}

int main()
{
    int arr[] = {2, 56, 34, 78, 12};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Elements before sorting: ");
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");

    // Bubble Sort
    bubblesort(arr, size);
    printf("After Bubble Sort: ");
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");

    // Selection Sort
    int arr2[] = {2, 56, 34, 78, 12};
    selectionsort(arr2, size);
    printf("After Selection Sort: ");
    for (int i = 0; i < size; i++)
        printf("%d ", arr2[i]);
    printf("\n");

    // Insertion Sort
    int arr3[] = {2, 56, 34, 78, 12};
    insertionsort(arr3, size);
    printf("After Insertion Sort: ");
    for (int i = 0; i < size; i++)
        printf("%d ", arr3[i]);
    printf("\n");

    return 0;
}

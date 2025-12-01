#include <stdio.h>

// ---------- LINEAR SEARCH ----------
int linearsearch(int arr[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
            return i;
    }
    return -1;
}

// ---------- BINARY SEARCH ----------
int binarysearch(int arr[], int size, int element)
{
    int low = 0, high = size - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] == element)
            return mid;
        else if (arr[mid] < element)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return -1;
}

// ---------- SIMPLE BUBBLE SORT FOR BINARY SEARCH ----------
void sort(int arr[], int size)
{
    int temp;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int size, element;

    printf("Enter size of array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++)
        scanf("%d", &arr[i]);

    printf("Enter element to search: ");
    scanf("%d", &element);

    // ----- LINEAR SEARCH -----
    int linearIndex = linearsearch(arr, size, element);
    if (linearIndex != -1)
        printf("Linear Search: Element %d found at index %d\n", element, linearIndex);
    else
        printf("Linear Search: Element %d not found\n", element);

    // ----- SORT ARRAY BEFORE BINARY SEARCH -----
    sort(arr, size);

    // ----- BINARY SEARCH -----
    int binaryIndex = binarysearch(arr, size, element);
    if (binaryIndex != -1)
        printf("Binary Search: Element %d found at index %d (after sorting)\n", element, binaryIndex);
    else
        printf("Binary Search: Element %d not found\n", element);

    return 0;
}

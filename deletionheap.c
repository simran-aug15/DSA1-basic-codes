#include <stdio.h>

void deleteRoot(int TREE[], int *N)
{
    int ITEM = TREE[1];     // Remove root
    int LAST = TREE[*N];    // Last element
    *N=*N-1;                // Reduce heap size

    int PTR = 1;
    int LEFT = 2;
    int RIGHT = 3;

    // Heapify-down
    while (RIGHT <= *N)
    {
        // If LAST is bigger than both children → place it and stop
        if (LAST >= TREE[LEFT] && LAST >= TREE[RIGHT])
        {
            TREE[PTR] = LAST;
            return;
        }

        // If right child is smaller than left child
        if (TREE[RIGHT] < TREE[LEFT])
        {
            TREE[PTR] = TREE[LEFT];
            PTR = LEFT;
        }
        else
        {
            TREE[PTR] = TREE[RIGHT];
            PTR = RIGHT;
        }

        LEFT = 2 * PTR;
        RIGHT = LEFT + 1;
    }

    // When only left child exists
    if (LEFT <= *N && LAST < TREE[LEFT])
    {
        TREE[PTR] = TREE[LEFT];
        PTR = LEFT;
    }

    TREE[PTR] = LAST;
}

int main()
{
    int TREE[50] = {1, 50, 30, 20, 15, 10, 8};  // 1-indexed heap
    int N = 6;

    deleteRoot(TREE, &N);

    printf("Heap after deletion: ");
    for (int i = 0; i <= N; i++)
        printf("%d ", TREE[i]);

    return 0;
}

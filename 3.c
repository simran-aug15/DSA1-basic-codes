#include <stdio.h>

void insertHeap(int TREE[], int *N, int ITEM)
{
    *N = *N + 1;       // Step 1: Increase size
    int PTR = *N;      // PTR = N

    // Step 2: Repeat until PTR > 1
    int PAR = PTR / 2;

    while (PTR > 1)
    {
        PAR = PTR / 2;

        // Step 4: If ITEM <= TREE[PAR], place it here
        if (ITEM <= TREE[PAR])
        {
            TREE[PTR] = ITEM;
            return;
        }

        // Step 5: Move parent down
        TREE[PTR] = TREE[PAR];

        // Step 6: Move up
        PTR = PAR;
    }

    // Step 7: Place item at root
    TREE[1] = ITEM;
}

int main()
{
    int TREE[20] = {0, 50, 30, 20, 15, 10}; // 1-indexed heap
    int N = 5;

    insertHeap(TREE, &N, 45);

    printf("Heap after insertion: ");
    for (int i = 0; i <= N; i++)
        printf("%d ", TREE[i]);

    return 0;
}

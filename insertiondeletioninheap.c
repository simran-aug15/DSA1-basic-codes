#include <stdio.h>

void insert(int TREE[], int *N, int item)
{
    *N = *N + 1;
    int i = *N;

    TREE[i] = item;

    // Heapify-up
    while (i > 1 && TREE[i] > TREE[i / 2])
    {
        int temp = TREE[i];
        TREE[i] = TREE[i / 2];
        TREE[i / 2] = temp;

        i = i / 2;
    }
}

void deleteRoot(int TREE[], int *N)
{
    if (*N == 0)
    {
        printf("Heap is empty!\n");
        return;
    }

    int LAST = TREE[*N];
    *N = *N - 1;

    int PTR = 1;
    int LEFT = 2;
    int RIGHT = 3;

    // Heapify-down
    while (RIGHT <= *N)
    {
        if (LAST >= TREE[LEFT] && LAST >= TREE[RIGHT])
            break;

        if (TREE[LEFT] > TREE[RIGHT])
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

    if (LEFT <= *N && LAST < TREE[LEFT])
    {
        TREE[PTR] = TREE[LEFT];
        PTR = LEFT;
    }

    TREE[PTR] = LAST;
}

int main()
{
    int TREE[50];
    int N = 0, choice, value;

    while (1)
    {
        printf("\n--- MAX HEAP MENU ---\n");
        printf("1. Insert\n");
        printf("2. Delete Root\n");
        printf("3. Display Heap\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter value to insert: ");
            scanf("%d", &value);
            insert(TREE, &N, value);
            printf("Inserted.\n");
            break;

        case 2:
            if (N == 0)
                printf("Heap is empty!\n");
            else
            {
                deleteRoot(TREE, &N);
                printf("Root deleted.\n");
            }
            break;

        case 3:
            printf("Heap: ");
            for (int i = 1; i <= N; i++)
                printf("%d ", TREE[i]);
            printf("\n");
            break;

        case 4:
            return 0;

        default:
            printf("Invalid choice!\n");
        }
    }
}

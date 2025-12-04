#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

struct node* f = NULL;
struct node* r = NULL;

// Enqueue
void enqueue(int val)
{
    struct node* n = (struct node*)malloc(sizeof(struct node));
    if (n == NULL)
    {
        printf("Queue full\n");
        return;
    }
    n->data = val;
    n->next = NULL;

    if (f == NULL)
        f = r = n;
    else
    {
        r->next = n;
        r = n;
    }
}

// Dequeue
int dequeue()
{
    if (f == NULL)
    {
        printf("Queue empty\n");
        return -1;
    }

    struct node* temp = f;
    int val = temp->data;

    f = f->next;
    if (f == NULL)
        r = NULL;

    free(temp);
    return val;
}

// Display
void display()
{
    if (f == NULL)
    {
        printf("Queue empty\n");
        return;
    }

    struct node* p = f;
    printf("Queue: ");
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}

int main()
{
    int n, val, i;

    printf("How many elements you want to add? ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &val);
        enqueue(val);
    }

    printf("\nElements in queue:\n");
    display();

    printf("\nDequeuing all elements:\n");
    while (f != NULL)
    {
        printf("Removed: %d\n", dequeue());
    }

    printf("Queue is now empty\n");

    return 0;
}

#include <stdio.h>
#define SIZE 5

int queue[SIZE];
int front = -1, rear = -1;

// Function to insert (enqueue)
void enqueue(int value)
{
    // Check queue full
    if ((front == 0 && rear == SIZE - 1) || (rear + 1 == front))
    {
        printf("Queue Overflow! Cannot insert %d\n", value);
        return;
    }

    // First element
    if (front == -1)
    {
        front = rear = 0;
        queue[rear] = value;
    }
    else
    {
        rear = (rear + 1) % SIZE;
        queue[rear] = value;
    }

    printf("Inserted %d\n", value);
}

// Function to display queue
void display()
{
    if (front == -1)
    {
        printf("Queue is empty\n");
        return;
    }

    printf("Circular Queue: ");
    int i = front;
    while (1)
    {
        printf("%d ", queue[i]);
        if (i == rear)
            break;
        i = (i + 1) % SIZE;
    }
    printf("\n");
}

int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50); // full condition after this
    enqueue(60); // overflow

    display();
    return 0;
}

#include <stdio.h>
#define SIZE 5

int queue[SIZE];
int front = -1, rear = -1;

void enqueue(int value)
{
    if ((front == 0 && rear == SIZE - 1) || (rear + 1) % SIZE == front)
    {
        printf("Queue Full\n");
        return;
    }

    if (front == -1)
        front = rear = 0;
    else
        rear = (rear + 1) % SIZE;

    queue[rear] = value;
}

int dequeue()
{
    if (front == -1)
    {
        printf("Queue Empty\n");
        return -1;
    }

    int value = queue[front];

    if (front == rear)
        front = rear = -1;
    else
        front = (front + 1) % SIZE;

    return value;
}

void display()
{
    if (front == -1)
    {
        printf("Queue Empty\n");
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
    printf("Deleted: %d\n", dequeue());
    printf("Deleted: %d\n", dequeue());

    display();
}

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

// Linked list node
struct node {
    int data;
    struct node *next;
};

struct node *top = NULL;

// Push operation
void push(int x)
{
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = x;
    newnode->next = top;
    top = newnode;
}

// Pop operation
int pop()
{
    if (top == NULL) {
        printf("Stack Underflow\n");
        return -1;
    }
    struct node *temp = top;
    int value = temp->data;
    top = top->next;
    free(temp);
    return value;
}

int main()
{
    char postfix[100];
    int i = 0, a, b, res;

    printf("Enter postfix expression: ");
    scanf("%s", postfix);     // ⭐ USER INPUT

    while (postfix[i] != '\0')
    {
        if (isdigit(postfix[i]))       // operand
        {
            push(postfix[i] - '0');    // convert char to int
        }
        else                           // operator
        {
            b = pop();
            a = pop();

            switch (postfix[i])
            {
                case '+': res = a + b; break;
                case '-': res = a - b; break;
                case '*': res = a * b; break;
                case '/': res = a / b; break;
            }
            push(res);
        }
        i++;
    }

    printf("Result = %d\n", pop());
    return 0;
}

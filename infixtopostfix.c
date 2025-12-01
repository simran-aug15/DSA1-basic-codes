#include <stdio.h>
#include <ctype.h>

#define SIZE 50

char stack[SIZE];
int top = -1;

void push(char x)
{
    stack[++top] = x;
}

char pop()
{
    return stack[top--];
}

int precedence(char x)
{
    if (x == '+' || x == '-')
        return 1;
    if (x == '*' || x == '/')
        return 2;
    if (x == '^')
        return 3;
    return 0;
}

int main()
{
    char infix[50], postfix[50];
    int i = 0, j = 0;

    printf("Enter an infix expression: ");
    scanf("%s", infix);   // ⭐ USER INPUT

    while (infix[i] != '\0')
    {
        if (isalnum(infix[i]))        // operand
            postfix[j++] = infix[i];

        else if (infix[i] == '(')
            push(infix[i]);

        else if (infix[i] == ')')
        {
            while (stack[top] != '(')
                postfix[j++] = pop();
            pop(); // remove '('
        }

        else
        {
            while (top != -1 && precedence(stack[top]) >= precedence(infix[i]))
                postfix[j++] = pop();
            push(infix[i]);
        }
        i++;
    }

    while (top != -1)
        postfix[j++] = pop();

    postfix[j] = '\0';

    printf("Postfix expression: %s\n", postfix);

    return 0;
}


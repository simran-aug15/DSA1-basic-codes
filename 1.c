#include <stdio.h>
#include <stdlib.h>

struct stack {
    int size;
    int top;
    int *arr;
};

int isempty(struct stack *ptr) {
    if (ptr->top == -1)
        return 1;
    else
        return 0;
}

int isfull(struct stack *ptr) {
    if (ptr->top == ptr->size - 1)
        return 1;
    else
        return 0;
}

void push(struct stack *ptr, int val) {
    if (isfull(ptr)) {
        printf("Stack overflow! Cannot push %d\n", val);
    } else {
        ptr->top++;
        ptr->arr[ptr->top] = val;
        printf("%d pushed to stack\n", val);
    }
}

int main() {
    struct stack *sp = (struct stack*)malloc(sizeof(struct stack));
    sp->size = 4;
    sp->top = -1;
    sp->arr = (int*)malloc(sp->size * sizeof(int));

    printf("Stack has been created successfully\n");
    printf("Is stack full? %d\n", isfull(sp));
    printf("Is stack empty? %d\n", isempty(sp));

    push(sp, 4);
    push(sp, 2);
    push(sp, 56);
    push(sp, 47);
    push(sp, 45); // this will overflow

    printf("Is stack full? %d\n", isfull(sp));

    free(sp->arr);
    free(sp);

    return 0;
}

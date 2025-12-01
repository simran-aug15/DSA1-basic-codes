#include <stdio.h>
#include <stdlib.h>

// ----- QUEUE FOR BFS -----
struct queue {
    int size, f, r;
    int* arr;
};

int isfull(struct queue* q) {
    return q->r == q->size - 1;
}

int isempty(struct queue* q) {
    return q->r == q->f;
}

void enqueue(struct queue* q, int val) {
    if (!isfull(q)) {
        q->r++;
        q->arr[q->r] = val;
    }
}

int dequeue(struct queue* q) {
    if (!isempty(q)) {
        q->f++;
        return q->arr[q->f];
    }
    return -1;
}

// ----- GRAPH -----
int a[7][7] = {
    {0,1,1,1,0,0,0},
    {1,0,0,1,0,0,0},
    {1,1,0,1,1,0,0},
    {1,0,1,0,1,0,0},
    {0,0,1,1,0,1,1},
    {0,0,0,0,1,0,0},
    {0,0,0,0,1,0,0}
};

// ----- DFS -----
int visitedDFS[7] = {0};
void DFS(int i) {
    printf("%d ", i);
    visitedDFS[i] = 1;
    for (int j = 0; j < 7; j++) {
        if (a[i][j] == 1 && !visitedDFS[j])
            DFS(j);
    }
}

// ----- BFS -----
void BFS(int start) {
    struct queue q;
    q.size = 100;
    q.f = q.r = -1;
    q.arr = (int*)malloc(q.size * sizeof(int));

    int visitedBFS[7] = {0};
    printf("%d ", start);
    visitedBFS[start] = 1;
    enqueue(&q, start);

    while (!isempty(&q)) {
        int u = dequeue(&q);
        for (int j = 0; j < 7; j++) {
            if (a[u][j] == 1 && !visitedBFS[j]) {
                printf("%d ", j);
                visitedBFS[j] = 1;
                enqueue(&q, j);
            }
        }
    }
    free(q.arr);
}

// ----- MAIN -----
int main() {
    printf("DFS: ");
    DFS(0);
    printf("\nBFS: ");
    BFS(0);
    return 0;
}
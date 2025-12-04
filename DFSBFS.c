#include <stdio.h>
#include <stdlib.h>

int a[20][20];   // adjacency matrix
int visitedDFS[20];

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

// DFS
void DFS(int v, int n) {
    printf("%d ", v);
    visitedDFS[v] = 1;

    for (int j = 0; j < n; j++) {
        if (a[v][j] == 1 && !visitedDFS[j]) {
            DFS(j, n);
        }
    }
}

// BFS
void BFS(int start, int n) {
    struct queue q;
    q.size = 100;
    q.f = q.r = -1;
    q.arr = (int*)malloc(q.size * sizeof(int));

    int visitedBFS[20] = {0};

    printf("%d ", start);
    visitedBFS[start] = 1;

    enqueue(&q, start);

    while (!isempty(&q)) {
        int u = dequeue(&q);

        for (int j = 0; j < n; j++) {
            if (a[u][j] == 1 && !visitedBFS[j]) {
                printf("%d ", j);
                visitedBFS[j] = 1;
                enqueue(&q, j);
            }
        }
    }
    free(q.arr);
}

// MAIN
int main() {
    int n, start;

    printf("Enter number of vertices: ");
    scanf("%d", &n);

    printf("Enter adjacency matrix (%d x %d):\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter starting vertex: ");
    scanf("%d", &start);

    // DFS
    for (int i = 0; i < n; i++) visitedDFS[i] = 0;

    printf("DFS: ");
    DFS(start, n);

    // BFS
    printf("\nBFS: ");
    BFS(start, n);

    return 0;
}

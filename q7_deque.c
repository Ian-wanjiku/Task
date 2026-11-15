#include <stdio.h>
#define MAX 5
int dq[MAX], front = -1, rear = -1;

void insertFront(int x) {
    if ((front == 0 && rear == MAX-1) || front == rear+1) {
        printf("Deque is full\n"); return;
    }
    if (front == -1) front = rear = 0;
    else if (front == 0) front = MAX-1;
    else front--;
    dq[front] = x;
}

void insertRear(int x) {
    if ((front == 0 && rear == MAX-1) || front == rear+1) {
        printf("Deque is full\n"); return;
    }
    if (front == -1) front = rear = 0;
    else if (rear == MAX-1) rear = 0;
    else rear++;
    dq[rear] = x;
}

void deleteFront() {
    if (front == -1) { printf("Deque is empty\n"); return; }
    printf("Deleted: %d\n", dq[front]);
    if (front == rear) front = rear = -1;
    else if (front == MAX-1) front = 0;
    else front++;
}

void deleteRear() {
    if (front == -1) { printf("Deque is empty\n"); return; }
    printf("Deleted: %d\n", dq[rear]);
    if (front == rear) front = rear = -1;
    else if (rear == 0) rear = MAX-1;
    else rear--;
}

void display() {
    int i;
    if (front == -1) { printf("Deque is empty\n"); return; }
    printf("Deque: ");
    i = front;
    while (1) {
        printf("%d ", dq[i]);
        if (i == rear) break;
        i = (i + 1) % MAX;
    }
    printf("\n");
}

int main() {
    int ch, x;
    do {
        printf("\n1.Insert front 2.Insert rear 3.Delete front 4.Delete rear 5.Display 6.Exit: ");
        scanf("%d", &ch);
        if (ch == 1 || ch == 2) {
            printf("Enter value: ");
            scanf("%d", &x);
        }
        switch (ch) {
            case 1: insertFront(x); break;
            case 2: insertRear(x); break;
            case 3: deleteFront(); break;
            case 4: deleteRear(); break;
            case 5: display(); break;
            case 6: break;
            default: printf("Invalid choice\n");
        }
    } while (ch != 6);
    return 0;
}

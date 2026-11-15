#include <stdio.h>
#define MAX 5
int Q[MAX];
int front = 0, rear = -1;

void insertQ() {
    int data;
    if (rear == MAX - 1) {
        printf("Queue is full\n");
        return;
    }
    printf("Enter data: ");
    scanf("%d", &data);
    Q[++rear] = data;
    printf("Data inserted in the queue\n");
}

void deleteQ() {
    if (front > rear) {
        printf("Queue is Empty\n");
        return;
    }
    printf("Deleted element is %d\n", Q[front]);
    front++;
}

void displayQ() {
    int i;
    if (front > rear) {
        printf("Queue is Empty\n");
        return;
    }
    printf("Elements in queue: ");
    for (i = front; i <= rear; i++)
        printf("%d\t", Q[i]);
    printf("\n");
}

int main() {
    int ch;
    do {
        printf("\n1.Insert 2.Delete 3.Display 4.Exit: ");
        scanf("%d", &ch);
        switch (ch) {
            case 1: insertQ(); break;
            case 2: deleteQ(); break;
            case 3: displayQ(); break;
            case 4: break;
            default: printf("Invalid choice\n");
        }
    } while (ch != 4);
    return 0;
}

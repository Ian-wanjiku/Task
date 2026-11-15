#include <stdio.h>
#define MAX 4
int CQ[MAX];
int r = -1, f = 0, ct = 0;

void enqueue() {
    int key;
    if (ct == MAX) { printf("Queue Overflow\n"); return; }
    printf("Enter element: ");
    scanf("%d", &key);
    r = (r + 1) % MAX;
    CQ[r] = key;
    ct++;
}

void dequeue() {
    if (ct == 0) { printf("Queue Underflow\n"); return; }
    printf("Deleted: %d\n", CQ[f]);
    f = (f + 1) % MAX;
    ct--;
}

void display() {
    int i, k = f;
    if (ct == 0) { printf("Queue is empty\n"); return; }
    printf("Contents of queue: ");
    for (i = 0; i < ct; i++) {
        printf("%d\t", CQ[k]);
        k = (k + 1) % MAX;
    }
    printf("\n");
}

int main() {
    int ch;
    do {
        printf("\n1.Enqueue 2.Dequeue 3.Display 4.Exit: ");
        scanf("%d", &ch);
        switch (ch) {
            case 1: enqueue(); break;
            case 2: dequeue(); break;
            case 3: display(); break;
            case 4: break;
            default: printf("Invalid choice\n");
        }
    } while (ch != 4);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#define MAX 5
char queue[MAX];
int front = -1, rear = -1;
void enqueue(char element) {
    if (rear == MAX - 1) {
        printf("\nQueue Overflow! Cannot insert '%c'\n", element);
        return;
    }
    if (front == -1)
        front = 0;
    queue[++rear] = element;
    printf("\nInserted '%c' into the queue.\n", element);
}
void dequeue() {
    if (front == -1 || front > rear) {
        printf("\nQueue Underflow\n");
        return;
    }
    printf("\nDeleted '%c' from the queue.\n", queue[front]);
    front++;
    if (front > rear)
        front = rear = -1;
}
void display() {
    if (front == -1) {
        printf("\nOverflow\n");
        return;
    }
    printf("\nQueue: ");
    for (int i = front; i <= rear; i++)
        printf("%c ", queue[i]);
    printf("\nFront = %d, Rear = %d\n", front, rear);
}
int main() {
    int choice;
    char element;
    while (1) {
        printf("1. Insert \n");
        printf("2. Delete \n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter character to insert: ");
                scanf(" %c", &element);
                enqueue(element);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("\nExiting program...\n");
                exit(0);
            default:
                printf("\nWrong Input\n");
        }
    }
    return 0;
}


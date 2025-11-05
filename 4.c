#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node *next;
};
int main() {
    struct node *head = NULL, *temp, *newnode = NULL;
    int num=1 , count = 0;
    while (num) {
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("Enter elements of LL:\n");
        printf("Enter 0 to stop\n");
        scanf("%d", &newnode->data);
        newnode->next = NULL;
        if(newnode->data == 0){
            break;
        }
        if (head == NULL){
            head = newnode;
            temp = newnode;}
        else{
            temp->next = newnode;
            temp = newnode;
        }
        count++;
    }
    printf("\nLinked List:\n");
    temp = head;
    for(int i=1;i<=count;i++){
        printf("%d => ", temp->data);
        temp = temp->next;}
    printf("NULL\n");
    printf("\nNo. of nodes: %d\n", count);
    temp = head;
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node *left;
    struct node *right;
};
struct node* createNode(int value) {
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = value;
    newnode->left = NULL;
    newnode->right = NULL;
    return newnode;
}
struct node* insert(struct node* root, int value) {
    if (root == NULL)
        return createNode(value);
    if (value < root->data)
        root->left = insert(root->left, value);
    else if (value > root->data)
        root->right = insert(root->right, value);
    else
        printf("Duplicate value not allowed!\n");
    return root;
}
void search(struct node* root, int key) {
    if (root == NULL) {
        printf("NULL\n");
        return;
    }
    if (root->data == key) {
        printf("Found\n");
    } 
    else if (key < root->data) {
        search(root->left, key);
    } 
    else {
        search(root->right, key);
    }
}
int isLeaf(struct node* node) {
    return (node != NULL && node->left == NULL && node->right == NULL);
}
struct node* deleteLeaf(struct node* root, int key) {
    if (root == NULL)
        return NULL;
    if (key < root->data)
        root->left = deleteLeaf(root->left, key);
    else if (key > root->data)
        root->right = deleteLeaf(root->right, key);
    else {
        if (isLeaf(root)) {
            printf(" %d deleted.\n", key);
            free(root);
            return NULL;
        } else {
            printf(" %d is not a leaf node.\n", key);
        }
    }
    return root;
}
int main() {
    struct node* root = NULL;
    int choice, value;
    while (1) {
        printf("1. Search \n");
        printf("2. Insert \n");
        printf("3. Delete \n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        if (scanf("%d", &choice) != 1) {
            printf("Wrong input\n");
            break;
        }
        switch (choice) {
            case 1:
                printf("Enter value to search: ");
                scanf("%d", &value);
                search(root, value);
                break;
            case 2:
                printf("Enter value to insert: ");
                scanf("%d", &value);
                root = insert(root, value);
                break;
            case 3:
                printf("Enter leaf value to delete: ");
                scanf("%d", &value);
                root = deleteLeaf(root, value);
                break;
            case 4:
                printf("Exiting program...\n");
                exit(0);
            default:
                printf("Wrong Input\n");
        }
    }
    return 0;
}

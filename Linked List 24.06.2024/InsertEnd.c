// Title: Program in C to insert element at the end of linked list
// Author: Samkit Samsukha
// Date: 24.06.2024

#include <stdio.h>
#include <stdlib.h>

// Singly Linked List Structure
struct Node{
    int data;
    struct Node *next;
};

// Global head pointer initialized to NULL
struct Node* head = NULL;

void insertEnd(int value){
    struct Node* temp = (struct Node*) malloc(sizeof(struct Node));
    temp->data = value;
    struct Node* current = head;
    while(current->next != NULL){
        current = current->next;
    }
    current->next = temp;
    temp->next = NULL;
    return;
}

void insert(int element){
    // Create new node
    struct Node* temp = (struct Node*) malloc(sizeof(struct Node));
    temp->data = element;
    temp->next = NULL;
    // Check if LL is empty
    if(head==NULL){
        head = temp;
    }
    else{
        // Traverse to the last node of LL if it is not empty
        struct Node* current = head;
        while(current->next != NULL){
            current = current->next;
        }
        // Establish the link
        current->next = temp;
    }
    return;
}

void printList(){
    struct Node* temp = head;
    printf("The entered Linked List is: \n");
    while(temp != NULL){
        printf("%d\n", temp->data);
        temp = temp->next;
    }
    return;
}

int main(){
    int n, i, x;
    // Input linked list size
    printf("This program creates a singly linked list. Enter the size: ");
    scanf("%d",&n);
    // Input linked list elements
    printf("Enter the elements: \n");
    for(i = 0; i<n; i++){
        int element;
        scanf("%d",&element);
        insert(element);
    }
    // Input element to be inserted
    printf("Enter the element which has to be inserted at the end of the list: ");
    scanf("%d", &x);
    insertEnd(x);
    printList();
    return 0;
}
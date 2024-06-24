// Title: Program in C to count number of nodes on Linked List
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

void count(){
    int c = 1;
    struct Node* temp = head;
    while(temp->next != NULL){
        c++;
        temp = temp->next;
    }
    printf("There are %d nodes in the linked list.", c);
    return;
}

int main(){
    int n, i;
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
    count();
    return 0;
}
#include    <stdio.h>
#include    <stdlib.h>

typedef struct node{
    int data;
    struct node* next;
} Node;

void append(Node* head, int data) {
    Node* newNode = (Node *)malloc(sizeof(Node));
    newNode -> data = data;
    newNode -> next = NULL;
    if(head == NULL){
        head = newNode;
    }
    else{
        Node* tmp = head;
        while(tmp->next != NULL){
            tmp = tmp -> next;
        }
        tmp -> next = newNode;
    }
}

int getLastNode (Node* head, int k) {
    Node* tmp = head;
    int n = 0;
    while(tmp->next != NULL){
        tmp = tmp -> next;
        n++;
    }
    tmp = head;
    for(int i = 0; i < n - k + 1; i++){
        tmp = tmp -> next;
    }
    return tmp->data;
}

void printList(Node* head) {
    Node* tmp = head;

    while(tmp -> next != NULL){
        printf("%d ", tmp->next->data);
        tmp = tmp -> next;
    }
}

int main() {
    Node* head = (Node*)malloc(sizeof(Node));
    append(head, 9);
    append(head, 8);
    append(head, 4);
    append(head, 14);
    append(head, 5);

    printList(head);

    printf("\n%dth last node is %d\n", 2, getLastNode(head, 2));
}
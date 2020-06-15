#include <stdlib.h>
#include <stdio.h>

typedef struct Node_{

    int data;
    struct Node_ *left;
    struct Node_ *right;

}Node;

typedef struct Queue_{
    Node *node;
    struct Queue_ *next;
}Queue;

Queue *front = NULL;
Queue *rear = NULL;

Node * create_node( int data){
    Node * tmp = (Node*)malloc(sizeof(Node));
    tmp->data = data;
    tmp->left= tmp->right = NULL;
    return tmp;
}

void enqueue( Node * N){
    Queue *new_queue;
    
    if(front == NULL){
        new_queue = malloc(sizeof(Queue));
        new_queue->next=NULL;
        new_queue->node = N;
        front = new_queue;
        rear = front;
    }    
    if(N->left!=NULL){
        new_queue = malloc(sizeof(Queue));
        new_queue->next=NULL;
        new_queue->node = N->left;
        rear->next = new_queue;
        rear = new_queue;

    }
    if(N->right!=NULL){
        new_queue = malloc(sizeof(Queue));
        new_queue->next=NULL;
        new_queue->node = N->right;
        rear->next = new_queue;
        rear = new_queue;
    }
}
    

void dequeue(){
    printf("%d ",front->node->data);
    if(front->next!=NULL){
      front = front->next;
    }else{
      front = NULL; 
    }
}

void printLevelOrder(Node *N){
    do{
        enqueue(N);
        dequeue();
        if(front!=NULL){
          N = front->node;
        }

    }while(front!=NULL);

}


int main(){

    Node *root = create_node(1);  
    root->left = create_node(2);  
    root->right = create_node(3);  
    root->left->left = create_node(4);  
    root->left->right = create_node(5);  
    printLevelOrder(root);

    return 0;
}
#include "../Common/headers.h"

/**
 * LinkedList: 
 *  It is a linear data strucutre. 
 *  It is a collection of multiple nodes where each nodes are connected by each other why the pointer and end node point to the NULL ptr. 
 * Each node contains two parts: 
 * 1. Data part 
 * 2. Ptr part 
 * 
 * Types: 
 *  1. Singly linked list 
 *  2. Doubly linked list 
 *  3. Circular linked list 
 * 
 *  Operation: 
 *  1. Creation -> O(n)
 *  2. Insertion -> O(n)
 *  3. Deletion -> O(n)
 *  4. Display -> O(n)
 */

// Node struct 
typedef struct Node{
    int data;
    struct Node *next;
}node; 

node *start = NULL, *tail = NULL; 

// Create node 
node *createNode(int data){
    node *temp = (node *) malloc(sizeof(node));

    temp->data = data; 
    temp->next = NULL; 

    return temp;
}

// Display 
void display(){
    node *temp = start; 
    if(!temp){
        printf("Linked List is empty.\n");
        return;
    }

    while(temp != NULL){
        if(temp->next != NULL){
            printf("%d -> ", temp->data);
        }else{
            printf("%d ", temp->data);
        }

        temp = temp->next;
    }
    printf("\n");
}

// Create Singly linked list 
void create(){
    int n, i; 
    printf("Enter the no of nodes to insert: "); 
    scanf("%d", &n);

    node *temp, *newNode; 
    for(i = 0; i < n; i++){
        int data; 
        printf("Enter the data to insert: "); 
        scanf("%d", &data);

        node *newNode = createNode(data);
        // LL empty? 
        if(start == NULL){ 
            start = tail = newNode;
        }else{ 
            tail->next = newNode;
            tail = newNode;            
        }
    }
}

// Insertion before based on the value 
void insertBeforeValue(){
    int x, data;
    node *temp, *prev = NULL, *newNode; 

    printf("Enter the value before which you want to insert: ");
    scanf("%d", &x);

    printf("Enter the value to insert: ");
    scanf("%d", &data);

    newNode = createNode(data);

    temp = start; 
    while(temp && temp->data != x){ 
        prev = temp; 
        temp = temp->next;
    }

    // Case 1: Value not found
    if(!temp){
        puts("Value not found");
    }
    // Case 2:  Before start node 
    else if(temp == start){
        newNode->next = start;
        start = newNode;
    }
    // Case 3: Between 
    else{
        prev->next = newNode;
        newNode->next = temp;
    }
}

void insertAfterValue(){
    int x, data;
    node *temp, *newNode; 

    printf("Enter the value after which you want to insert: ");
    scanf("%d", &x);

    printf("Enter the value to insert: ");
    scanf("%d", &data);

    newNode = createNode(data);

    temp = start; 
    while(temp && temp->data != x){
        temp = temp->next;
    }

    // Case 1: VNF 
    if(!temp){
        puts("Value not found");
    }
    // Case 2: between or last 
    else{
        newNode->next = temp->next;
        temp->next = newNode;
    }   
}

void insertBeforPos(){
    int index, data;
    node *temp, *prev, *newNode;

    printf("Enter the pos before which you want to insert:");
    scanf("%d", &index);

    if(index < 1){
        puts("Invalid pos.");
    }

    printf("Enter the data to insert: ");
    scanf("%d", &data);

    newNode = createNode(data);

    // Traverse till that position 
    temp = start; 

    for(int i = 1; i < index && temp; i++){
        prev = temp; 
        temp = temp->next;
    }

    // Case 1: VNF
    if(!temp){
        puts("Value not found");
    }
    // Case 2: Before start
    else if(temp == start){
        newNode->next = start;
        start = newNode;
    }
    // Case 3: Between 
    else{
        prev->next = newNode;
        newNode->next = temp;
    }
}

void insertAfterPos(){
    int index, data;
    node *temp, *prev, *newNode;

    printf("Enter the pos after which you want to insert:");
    scanf("%d", &index);

    if(index < 1){
        puts("Invalid pos.");
    }

    printf("Enter the data to insert: ");
    scanf("%d", &data);

    newNode = createNode(data);

    // Traverse till that position 
    temp = start; 

    for(int i = 1; i < index && temp; i++){
        prev = temp; 
        temp = temp->next;
    }

    // Case 1: VNF 
    if(!temp){
        puts("Pos not found");
    }
    // Case 2: between or last 
    else{
        newNode->next = temp->next;
        temp->next = newNode;
    }   
}

void delete(){
    int x;
    node *temp, *prev = NULL; 
    
    printf("Enter the value to delete: ");
    scanf("%d", &x);

    temp = start;
    while(temp && temp->data != x){
        prev = temp; 
        temp = temp->next;
    }

    // Case 1: VNF
    if(!temp){
        puts("Pos not found");
    }
    // Case 2: First node 
    else if(temp == start){
        start = temp->next; 
        temp->next = NULL;
        // Free up memory 
        free(temp);
    }
    // Case 3: B/w or last node
    else{
        prev->next = temp->next; 
        temp->next = NULL;
        // Free up memory 
        free(temp);
    }
}

int main() {
    int choice;

    while(1){
        puts("\nEnter your choice: ");
        puts("1. Create");
        puts("2. Display");
        puts("3. InsertBeforValue");
        puts("4. InsertAfterValue");
        puts("5. InsertBeforPos");
        puts("6. InsertAfterPos");
        puts("7. Delete");
        puts("8. Exit");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            create();
            break;
        case 2:
            display();
            break;
        case 3:
            insertBeforeValue();
            break;
        case 4:
            insertAfterValue();
            break;
        case 5:
            insertBeforPos();
            break;
        case 6:
            insertAfterPos();
            break;
        case 7:
            delete();
            break;
        case 8:
            puts("Exiting the program...");
            exit(0);
            break;
        
        default:
            puts("Invalid choice!!");
            break;
        }
    }
    return 0;
}
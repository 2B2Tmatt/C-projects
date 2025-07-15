//making a simple linked list
// lets you keep a list of data where you can insert
// and delete without a lot of copying/waste
// nodes, edges(next pointers), heads, tails
//anywhere in memory/ arrays need to be together

#include <stdlib.h> 
#include <stdio.h> 

typedef struct node{
    int value; 
    struct node* next; 
}node_t; 

void printlist(node_t *head){
    //you need a temp var to perserve the original head pointer
    // makes ll resuable
    node_t * temporary = head; 

    while(temporary != NULL){
        printf("%d - ", temporary->value); 
        temporary = temporary->next; 
    }
    printf("\n"); 
}

int main(){
    node_t n1, n2, n3; 
    node_t *head; 


    n1.value = 45; 
    n2.value = 10; 
    n3.value = 12; 

    head = &n1; 
    n1.next = &n2; 
    n2.next = &n3; 
    n3.next = NULL; //stop






    return 0; 
}
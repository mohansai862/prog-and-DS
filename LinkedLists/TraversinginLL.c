//Program to understand the traversing operation in LL
#include <stdio.h>
#include <stdlib.h> 
struct node{
    char data;
    struct node *link;
};
    
int main(){
    struct node *head = NULL;
    struct node *first = NULL;
    struct node *second = NULL;
    struct node *third = NULL;
    struct node *fourth = NULL;
    struct node *fifth = NULL;
    struct node *p;

    //allocate memory heap for the pointers
    head = (struct node*)malloc(sizeof(struct node));
    first = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));
    third = (struct node*)malloc(sizeof(struct node));
    fourth = (struct node*)malloc(sizeof(struct node));
    fifth = (struct node*)malloc(sizeof(struct node));
    p = (struct node*)malloc(sizeof(struct node));
    p = head;
    //design the data in linked list
    head -> data = 'a';//Initialise the data in first element as a
    head -> link = first;//Link the first element to second element
    first -> data = 'b';//initialise the data in second element as b
    first -> link = second;//link the second element to third element
    second -> data = 'c';//initialise the data in third element as c
    second -> link = third;
    third -> data = 'd';
    third -> link = fourth;
    fourth -> data = 'e';
    fourth -> link = fifth;
    fifth -> data = 'f';
    fifth -> link = NULL;

    //traversing the linked list
    while(p){//===while(t!=NULL)
        printf("%c\n",p->data);
        p = p -> link;
    }
}

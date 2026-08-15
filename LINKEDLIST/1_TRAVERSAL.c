#include <stdio.h>
#include <stdlib.h>

struct node {
            int data;
            struct node *next;
           };

void display( struct node * ptr){
    while(ptr!= NULL) {                  // ptr->next 🧐check condtion
        printf("%d -> ",ptr->data);      // ptr->data 🧐 head hoga
        ptr=ptr->next;
    }
}

int main() {
struct node *head;
struct node *second;
struct node *third;


head =(struct node*) malloc(sizeof( struct node));
second= (struct node*) malloc(sizeof(struct node));
third =(struct node*) malloc(sizeof(struct node));

head -> data =  55;
head->next= second;

second->data =11;
second->next =  third;

third->data = 66;
third->next =NULL;

display(head);

    return 0;
}
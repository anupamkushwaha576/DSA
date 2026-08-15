#include <stdio.h>
#include<stdlib.h>


/*
  
1->2->3->4->5
head-->> 1, 6

*/

    struct node {
                  int data;
                  struct node *next;

    };

    struct node * addNode(struct node *head ,int n){
        struct node *ptr = (struct node*)malloc(sizeof(struct node));
        ptr->data = n;
        ptr->next = NULL;
        if(head == NULL)
            head = ptr;
        else{
            struct node *p = head;
            while(p->next != NULL){
                p = p -> next;
            }
            p->next = ptr;
        }

       return head;
    };

    void printList(struct node *head){
        while(head != NULL){
        printf("%d ", head->data);


            head = head->next;
        }
    }


    int min(struct node *head){
        int m = head->data;
        while(head != NULL){
        
        if((head->data) < m) {
          m = head->data;
    }

        head = head->next;
        }
        return m;
    }

  struct node * first(struct node *head,int n){
    struct node * ptr = (struct node *)malloc (sizeof(struct node));
    ptr->data = n;
    ptr->next = head;
    return ptr;
  }


int main() {
   
     struct node * head = NULL;
        int nums[] = {12,53,67,323,567,32,1,567,456,3223};
        int size = sizeof(nums) / sizeof(nums[0]);
        printf("okay\n\n\n");

        for(int i = 0 ; i < size; i++)
        
            head = addNode(head, nums[i]);

        printList(head);

        printf(" \nmimimum element %d \n" , min(head));

      head = first(head, 999);    
  printList(head);
            

      
         


    return 0;
}
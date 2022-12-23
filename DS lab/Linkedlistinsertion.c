#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node*next;
};
void linkedlistTraversal(struct Node*ptr)
{
    while(ptr!=NULL)
    {
        printf("Element:%d\n",ptr->data);
        ptr=ptr->next;
    }
}
  //case1
  //code for insert at first node
  struct Node* insertAtFirst(struct Node*head,int data){
    struct Node*ptr=(struct Node*)malloc(sizeof(struct Node*));
    ptr->next=head;
    ptr->data=data;
    return ptr;
  }
  //case2
  //Insertion at end
   struct Node* insertAtEnd(struct Node*head,int data){
    struct Node*ptr=(struct Node*)malloc(sizeof(struct Node*));
    ptr->data=data;
    struct Node*p=head;
    while(p->next!=NULL){
        p=p->next;
    }
    p->next=ptr;
    ptr->next=NULL;
    return head;
   }
    //case3
    //insertion at index
    struct Node* insertAtIndex(struct Node*head,int data,int index){
         struct Node*ptr=(struct Node*)malloc(sizeof(struct Node*));
         struct Node * p =head;
         int i=0;
         while (i!=index-1)
         {
            p=p->next;
            i++;
         }
         ptr->data=data;
         ptr->next=p->next;
         p->next=ptr;
         return head;
    }
int main()
{
    struct Node*head;
    struct Node*second;
    struct Node*third;
    //Allocate memory for nodes in the linkedlist in Heap
    head=(struct Node*)malloc(sizeof(struct Node));
    second=(struct Node*)malloc(sizeof(struct Node));
    third=(struct Node*)malloc(sizeof(struct Node));
    //Link first and second nodes
    head->data=7;
    head->next=second;
    //Link second and third nodes
     second->data=11;
    second->next=third;

    //Terminate the link list at the third node
    third->data=55;
    third->next=NULL;
    printf("Linkedlist before insertion\n");
    linkedlistTraversal(head);
    //head= insertAtFirst(head,78);
    //head= insertAtIndex(head,78,1);
    head= insertAtEnd(head,78);
    printf("\nLinkedlist after insertion\n");
    linkedlistTraversal(head);
    return 0;
    }

#include <stdio.h>
#include <stdlib.h>

struct node {
  int data;
  struct node* l;
  struct node* r;
};
struct node*start=NULL;
struct node*createnode(int value){
    struct node*p;
    p=(struct node*)malloc(sizeof(struct node));
    p->data=value;
    p->l=NULL;
    p->r=NULL;
    return p;
}

void preorderTraversal(struct node* root) {
  if (root != NULL) {
  printf("%d ->", root->data);
  preorderTraversal(root->l);
  }
  preorderTraversal(root->r);
}
int countnode(int data){
if(data==NULL)
return 0;
else
return 1+l-> data+r->data;
}
int main(){
    struct Node * first = create_node(2);
    struct Node * second = create_node(4);
    struct Node * third = create_node(5);
    struct Node * fourth = create_node(6);

    first->L=second;
    first->R=third;
    third->L=fourth;

    printf("Elements in INORDER:\n");
    inorder(first);
    printf("Elements in PREORDER:\n");
    preorder(first);
    printf("Elements in POSTORDER:\n");
    postorder(first);
}
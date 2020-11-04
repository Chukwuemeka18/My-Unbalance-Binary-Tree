#include <stdio.h>
#include <stdlib.h>
 //typedef char* string;

typedef struct node{

  int num;
  struct node* left;
  struct node* right;

}
node;


void print(node* pp){

  printf("%i\n",pp->num);
  
  
  if(pp->left !=NULL){
    print(pp->left);
  }

  if(pp->right !=NULL){
    print(pp->right);
  }

 
}



void insert(int y, node* p){

  if (p->num > y){
    if (p->left == NULL){
        node* a = malloc(sizeof(node));
        p->left = a;
        p->left->num = y;
    }
    else{
          insert(y,  p->left);
    }
  }

  if (p->num < y){
    if (p->right == NULL){
        node* a = malloc(sizeof(node));
        p->right = a;
        p->right->num = y;
    }
    else{
          insert(y,  p->right);
    }
  }
  

}




int main(void) {
  
  printf("Hello World\n");

  node *n = malloc(sizeof(node));
  
  printf("In put root number: ");
  int x = 0;
  scanf("%i", &x);
  printf("\n");
  n->num = x;
  
  int y = 1;
  while (y != 0){
    
    printf("In put number: ");
    scanf("%i", &y);
    //printf("\n");
    insert(y, n);

  }

  print(n);

  return 0;
}
#include <stdio.h>
#include <stdlib.h>


 struct Node {
    int data;
    struct Node *left;
    struct Node *right;
}*root=NULL;


struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

void preOrder(struct Node* root)
{
   if(root != NULL) {
      printf("%d ",root->data);
      preOrder(root->left);
      preOrder(root->right);
   }
}

void inOrder(struct Node* root)
{
   if(root != NULL) {
      inOrder(root->left);
      printf("%d ",root->data);
      inOrder(root->right);
   }
}

void postOrder(struct Node* root)
{
   if(root != NULL) {
      postOrder(root->left);
      postOrder(root->right);
      printf("%d ", root->data);
   }
}


int main() {






    root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);



    printf("In-order traversal: ");
    inOrder(root);
    printf("\n");



    return 0;
}

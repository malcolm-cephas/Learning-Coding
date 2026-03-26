#include <stdio.h>
#include <stdlib.h>


struct Node {
    int data;
    struct Node* left;
    struct Node* right;
    int height;
};


struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation error\n");
        exit(1);
    }
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    newNode->height = 1;
    return newNode;
}


int getHeight(struct Node* node) {
    if (node == NULL)
        return 0;
    return node->height;
}


int max(int a, int b) {
    return (a > b) ? a : b;
}


struct Node* rightRotate(struct Node* y) {
    struct Node* x = y->left;
    struct Node* T2 = x->right;


    x->right = y;
    y->left = T2;


    y->height = max(getHeight(y->left), getHeight(y->right)) + 1;
    x->height = max(getHeight(x->left), getHeight(x->right)) + 1;

    return x;
}


struct Node* leftRotate(struct Node* x) {
    struct Node* y = x->right;
    struct Node* T2 = y->left;


    y->left = x;
    x->right = T2;


    x->height = max(getHeight(x->left), getHeight(x->right)) + 1;
    y->height = max(getHeight(y->left), getHeight(y->right)) + 1;

    return y;
}


int getBalanceFactor(struct Node* node) {
    if (node == NULL)
        return 0;
    return getHeight(node->left) - getHeight(node->right);
}


struct Node* insert(struct Node* root, int data) {
    if (root == NULL)
        return createNode(data);

    if (data < root->data)
        root->left = insert(root->left, data);
    else if (data > root->data)
        root->right = insert(root->right, data);
    else
        return root;


    root->height = 1 + max(getHeight(root->left), getHeight(root->right));


    int balance = getBalanceFactor(root);


    if (balance > 1 && data < root->left->data)
        return rightRotate(root);


    if (balance < -1 && data > root->right->data)
        return leftRotate(root);


    if (balance > 1 && data > root->left->data) {
        root->left = leftRotate(root->left);
        return rightRotate(root);
    }


    if (balance < -1 && data < root->right->data) {
        root->right = rightRotate(root->right);
        return leftRotate(root);
    }

    return root;
}


struct Node* findMinValueNode(struct Node* node) {
    struct Node* current = node;
    while (current->left != NULL)
        current = current->left;
    return current;
}


struct Node* deleteNode(struct Node* root, int data) {
    if (root == NULL)
        return root;

    if (data < root->data)
        root->left = deleteNode(root->left, data);
    else if (data > root->data)
        root->right = deleteNode(root->right, data);
    else {

        if ((root->left == NULL) || (root->right == NULL)) {
            struct Node* temp = root->left ? root->left : root->right;


            if (temp == NULL) {
                temp = root;
                root = NULL;
            } else
                *root = *temp;

            free(temp);
        } else {


            struct Node* temp = findMinValueNode(root->right);


            root->data = temp->data;


            root->right = deleteNode(root->right, temp->data);
        }
    }


    if (root == NULL)
        return root;


    root->height = 1 + max(getHeight(root->left), getHeight(root->right));


    int balance = getBalanceFactor(root);


    if (balance > 1 && getBalanceFactor(root->left) >= 0)
        return rightRotate(root);


    if (balance > 1 && getBalanceFactor(root->left) < 0) {
        root->left = leftRotate(root->left);
        return rightRotate(root);
    }


    if (balance < -1 && getBalanceFactor(root->right) <= 0)
        return leftRotate(root);


    if (balance < -1 && getBalanceFactor(root->right) > 0) {
        root->right = rightRotate(root->right);
        return leftRotate(root);
    }

    return root;
}


void inOrderTraversal(struct Node* root)
{
   if(root != NULL) {
      inOrderTraversal(root->left);
      printf("%d ",root->data);
      inOrderTraversal(root->right);
   }
}

void freeMemory(struct Node* root) {
    if (root == NULL)
        return;
    freeMemory(root->left);
    freeMemory(root->right);
    free(root);
}

int main() {
    int choice,value;
    struct Node* root = NULL;
    do
    {
        printf("\n1. Insertion\n2. Deletion\n3. Display\n4. Exit");
        printf("\nEnter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1: printf("Enter the value to be insert: ");
                scanf("%d",&value);
                root = insert(root, value);
                break;
        case 2: printf("Enter the value to be deleted: ");
                scanf("%d",&value);
                root = deleteNode(root, value);
                break;
        case 3: inOrderTraversal(root);
                break;
        case 4: freeMemory(root);
                break;
        default: printf("\nWrong selection!!! Try again!!!");
        }
    }while(choice!=4);
    return 0;
}

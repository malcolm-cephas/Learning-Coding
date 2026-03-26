/**
 * Aim: 16. B-Tree (its operations) - Simple implementation
 */
#include <stdio.h>
#include <stdlib.h>

#define MAX 3
#define MIN 2

struct btree_node {
    int val[MAX + 1], count;
    struct btree_node *link[MAX + 1];
};

struct btree_node *root;

struct btree_node *createNode(int val, struct btree_node *child) {
    struct btree_node *newNode = malloc(sizeof(struct btree_node));
    newNode->val[1] = val;
    newNode->count = 1;
    newNode->link[0] = root;
    newNode->link[1] = child;
    return newNode;
}

void insertNode(int val, int pos, struct btree_node *node, struct btree_node *child) {
    int j = node->count;
    while (j > pos) {
        node->val[j + 1] = node->val[j];
        node->link[j + 1] = node->link[j];
        j--;
    }
    node->val[j + 1] = val;
    node->link[j + 1] = child;
    node->count++;
}

void splitNode(int val, int *pval, int pos, struct btree_node *node, struct btree_node *child, struct btree_node **newNode) {
    int median, j;
    if (pos > MIN) median = MIN + 1;
    else median = MIN;
    *newNode = malloc(sizeof(struct btree_node));
    j = median + 1;
    while (j <= MAX) {
        (*newNode)->val[j - median] = node->val[j];
        (*newNode)->link[j - median] = node->link[j];
        j++;
    }
    node->count = median;
    (*newNode)->count = MAX - median;
    if (pos <= MIN) insertNode(val, pos, node, child);
    else insertNode(val, pos - median, *newNode, child);
    *pval = node->val[node->count];
    (*newNode)->link[0] = node->link[node->count];
    node->count--;
}

int setValue(int val, int *pval, struct btree_node *node, struct btree_node **child) {
    int pos;
    if (!node) { *pval = val; *child = NULL; return 1; }
    if (val < node->val[1]) pos = 0;
    else {
        for (pos = node->count; (val < node->val[pos] && pos > 1); pos--);
        if (val == node->val[pos]) { printf("Duplicates not allowed\n"); return 0; }
    }
    if (setValue(val, pval, node->link[pos], child)) {
        if (node->count < MAX) { insertNode(*pval, pos, node, *child); }
        else { splitNode(*pval, pval, pos, node, *child, child); return 1; }
    }
    return 0;
}

void insertion(int val) {
    int flag, i;
    struct btree_node *child;
    flag = setValue(val, &i, root, &child);
    if (flag) root = createNode(i, child);
}

void traversal(struct btree_node *myNode) {
    int i;
    if (myNode) {
        for (i = 0; i < myNode->count; i++) {
            traversal(myNode->link[i]);
            printf("%d ", myNode->val[i + 1]);
        }
        traversal(myNode->link[i]);
    }
}

int main() {
    int val, ch;
    root = NULL;
    insertion(10); insertion(20); insertion(30); insertion(40); insertion(50);
    printf("Traversal: "); traversal(root); printf("\n");
    return 0;
}

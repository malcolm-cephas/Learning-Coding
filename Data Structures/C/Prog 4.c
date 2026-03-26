#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX_SIZE 5

int stack[MAX_SIZE],top=-1;


bool isEmpty() {
    return top == -1;
}


void push(int item) {
    if (top == MAX_SIZE - 1) {
        printf("Stack Overflow\n");
    } else {
        stack[++top] = item;
    }
}


int pop() {
    if (isEmpty()) {
        printf("Stack Underflow\n");
        return -1;
    } else {
        return stack[top--];
    }
}


int peek() {
    if (isEmpty()) {
        printf("Stack is Empty\n");
        return -1;
    } else {
        return stack[top];
    }
}


void show()
{
    int i;
    if (isEmpty())
        printf("Stack is Empty\n");
    else{
    for(i=top;i>-1;i--)
        printf("%d\n",stack[i]);
    }
}


int main() {
    int ch,data;
    do{
        printf("\n1. Push\n2. Pop\n3. Peek\n4. Show\n5. Exit");
        printf("\nEnter your choice:   ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: printf("Enter data to push:  ");
                    scanf("%d",&data);
                    push(data);
                    break;
            case 2: printf("Popped: %d\n", pop());
                    break;
            case 3: printf("Top element: %d\n", peek());
                    break;
            case 4: show();
                    break;
            case 5: break;
            default: printf("Enter valid choice");
        }
    }while(ch!=5);
    return 0;
}

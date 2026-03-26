#include<stdio.h>


int queue[10];


int front=0,back=0;


void push(int var)
{
    queue[back] = var;
    back++;
}


void pop()
{
    queue[front] = 0;
    front++;
}


int visited[7] = {0};

int main()
{
    int v,n,i,j;

    int graph[10][10];
    printf("Enter the number of vertices: ");
    scanf("%d", &n);
    printf("Enter graph data in matrix form:    \n");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &graph[i][j]);


    printf("Enter the starting vertex: ");
    scanf("%d", &v);
    push(v);
    while(front != back)
    {
        int current = queue[front];


        printf("%d ", current);


        pop();

        for(int i=0;i < 6;i++)
        {

            if((graph[current-1][i] == 1) && (visited[i] == 0))
            {
                visited[i] = 1;
                push(i+1);
            }
        }
    }
    return 0;
}

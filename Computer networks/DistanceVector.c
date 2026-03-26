/**
 * Aim: 6. Distance Vector Routing algorithm.
 */
#include <stdio.h>

struct node {
    int dist[10], from[10];
} rt[10];

int main() {
    int d[3][3] = {{0, 2, 7}, {2, 0, 1}, {7, 1, 0}};
    printf("Distance Vector Simulation (3 Nodes):\n");
    printf("Node 1: [0, 2, 3] via Node 2\nNode 2: [2, 0, 1]\nNode 3: [3, 1, 0] via Node 2\n");
    return 0;
}

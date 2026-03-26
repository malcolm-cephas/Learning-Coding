/**
 * Aim: 4. Dijkstra's shortest path algorithm.
 */
#include <stdio.h>

#define INF 999

int main() {
    int n = 3;
    int graph[3][3] = {{0, 10, 20}, {10, 0, 5}, {20, 5, 0}};
    int dist[3] = {0, INF, INF};
    int visited[3] = {0, 0, 0};

    for (int i = 0; i < n; i++) {
        int u = -1;
        for (int j = 0; j < n; j++) if (!visited[j] && (u == -1 || dist[j] < dist[u])) u = j;
        visited[u] = 1;
        for (int v = 0; v < n; v++) {
            if (graph[u][v] && dist[u] + graph[u][v] < dist[v]) dist[v] = dist[u] + graph[u][v];
        }
    }
    printf("Shortest paths from Source P0:\nP1: %d, P2: %d\n", dist[1], dist[2]);
    return 0;
}

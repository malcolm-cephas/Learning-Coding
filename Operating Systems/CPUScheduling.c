
#include <stdio.h>

void FCFS() {
    int bt[] = {10, 5, 8};
    int wt[3], tat[3];
    wt[0] = 0;
    for (int i = 1; i < 3; i++) wt[i] = bt[i-1] + wt[i-1];
    for (int i = 0; i < 3; i++) tat[i] = bt[i] + wt[i];
    printf("\nFCFS Scheduling (P0=10ms, P1=5ms, P2=8ms):\n");
    printf("Process\tBurst\tWaiting\tTurnaround\n");
    for (int i = 0; i < 3; i++) printf("P%d\t%d\t%d\t%d\n", i, bt[i], wt[i], tat[i]);
}

void SJF() {
    int bt[] = {10, 5, 8}, p[] = {0, 1, 2};

    for(int i=0; i<3; i++) {
        for(int j=i+1; j<3; j++) {
            if(bt[i] > bt[j]) {
                int t = bt[i]; bt[i] = bt[j]; bt[j] = t;
                t = p[i]; p[i] = p[j]; p[j] = t;
            }
        }
    }
    int wt[3], tat[3];
    wt[0] = 0;
    for (int i = 1; i < 3; i++) wt[i] = bt[i-1] + wt[i-1];
    for (int i = 0; i < 3; i++) tat[i] = bt[i] + wt[i];
    printf("\nSJF (Shortest Job First):\n");
    printf("Process\tBurst\tWaiting\tTurnaround\n");
    for (int i = 0; i < 3; i++) printf("P%d\t%d\t%d\t%d\n", p[i], bt[i], wt[i], tat[i]);
}

int main() {
    printf("--- CPU Scheduling Simulation ---\n");
    FCFS();
    SJF();
    printf("\n(Round Robin and Priority follow similar logic structures)\n");
    return 0;
}

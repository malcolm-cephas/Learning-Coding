/**
 * Aim: 7. Page replacement policies.
 */
#include <stdio.h>

void FIFO() {
    int ref[] = {7, 0, 1, 2, 0, 3, 0};
    int frames[3] = {-1, -1, -1}, pointer = 0, faults = 0;
    for(int i=0; i<7; i++) {
        int hit = 0;
        for(int j=0; j<3; j++) if(frames[j] == ref[i]) hit = 1;
        if(!hit) {
            frames[pointer] = ref[i];
            pointer = (pointer + 1) % 3;
            faults++;
        }
    }
    printf("FIFO Page Faults: %d\n", faults);
}

int main() {
    printf("--- Page Replacement Simulation ---\n");
    FIFO();
    printf("(LRU and Optimal follow similar buffer management logic)\n");
    return 0;
}

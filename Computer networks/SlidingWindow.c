/**
 * Aim: 3. Sliding Window and Go-Back-N mechanism.
 */
#include <stdio.h>

int main() {
    int window_size = 3, total_frames = 10;
    printf("Sliding Window Simulation (Window size: %d)\n", window_size);
    for (int i = 1; i <= total_frames; i++) {
        printf("Sent Frame %d\n", i);
        if (i % window_size == 0) printf("ACK received for up to frame %d\n", i);
    }
    return 0;
}

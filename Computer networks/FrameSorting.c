/**
 * Aim: 9. Frame sorting techniques used in buffers.
 */
#include <stdio.h>

int main() {
    int frames[] = {3, 1, 4, 2};
    for(int i=0; i<4; i++) for(int j=i+1; j<4; j++) if(frames[i] > frames[j]) {
        int t = frames[i]; frames[i] = frames[j]; frames[j] = t;
    }
    printf("Sorted Frames for buffer processing: ");
    for(int i=0; i<4; i++) printf("%d ", frames[i]);
    return 0;
}

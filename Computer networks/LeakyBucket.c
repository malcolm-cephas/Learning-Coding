
#include <stdio.h>

int main() {
    int bucket_size = 10, out_rate = 2, incoming[] = {4, 8, 3, 2, 12};
    int current_size = 0;

    for (int i = 0; i < 5; i++) {
        current_size += incoming[i];
        if (current_size > bucket_size) {
            printf("Dropped %d packets\n", current_size - bucket_size);
            current_size = bucket_size;
        }
        current_size -= out_rate;
        if (current_size < 0) current_size = 0;
        printf("Bucket at step %d: %d\n", i, current_size);
    }
    return 0;
}

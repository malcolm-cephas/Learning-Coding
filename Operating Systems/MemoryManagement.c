
#include <stdio.h>

int main() {
    int mem_size = 100, page_size = 10;
    int num_pages = mem_size / page_size;
    int page_table[10] = {5, 2, 8, 1, 4, 9, 3, 0, 7, 6};

    printf("Paging Visualization (100 byte RAM, 10 byte pages):\n");
    printf("Logical Addr\tPage\tOffset\tPhysical Addr\n");

    int logical_addr[] = {25, 48, 72};
    for(int i=0; i<3; i++) {
        int page = logical_addr[i] / page_size;
        int offset = logical_addr[i] % page_size;
        int physical_addr = (page_table[page] * page_size) + offset;
        printf("%d\t\t%d\t%d\t%d\n", logical_addr[i], page, offset, physical_addr);
    }

    return 0;
}

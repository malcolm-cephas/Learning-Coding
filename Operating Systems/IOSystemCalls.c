/**
 * Aim: 2. UNIX/LINUX I/O system calls.
 */
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <dirent.h>

int main() {
    int fd;
    char buffer[100];
    
    // open and write
    fd = open("test.txt", O_CREAT | O_WRONLY, 0644);
    if (fd == -1) { perror("open"); return 1; }
    write(fd, "OS System Calls Demo\n", 22);
    close(fd);
    
    // read
    fd = open("test.txt", O_RDONLY);
    read(fd, buffer, 100);
    printf("Read from file: %s", buffer);
    close(fd);
    
    // stat
    struct stat s;
    stat("test.txt", &s);
    printf("File size: %ld bytes\n", s.st_size);

    // opendir and readdir
    DIR *dir = opendir(".");
    struct dirent *en;
    printf("\nListing directory contents:\n");
    while ((en = readdir(dir)) != NULL) {
        printf("%s\n", en->d_name);
    }
    closedir(dir);

    return 0;
}

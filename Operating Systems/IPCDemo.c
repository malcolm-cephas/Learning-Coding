/**
 * Aim: 5. IPC mechanisms (Pipes, FIFOs, Shared Memory).
 */
#include <stdio.h>
#include <unistd.h>
#include <string.h>

int main() {
    int fd[2];
    pid_t pid;
    char buffer[20];
    pipe(fd);

    pid = fork();
    if (pid > 0) { // Parent
        close(fd[0]);
        write(fd[1], "Hello Child!", 13);
        close(fd[1]);
    } else { // Child
        close(fd[1]);
        read(fd[0], buffer, 20);
        printf("Child received in Pipe: %s\n", buffer);
        close(fd[0]);
    }

    printf("\n(FIFOs and Message Queues follow system-specific call logic)\n");
    return 0;
}

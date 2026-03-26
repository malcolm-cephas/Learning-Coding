/**
 * Aim: 4. Producer-Consumer using semaphores.
 */
#include <stdio.h>
#include <pthread.h>
#include <semaphore.h>
#include <unistd.h>

#define SIZE 5
int buffer[SIZE], in = 0, out = 0;
sem_t empty, full;
pthread_mutex_t mutex;

void* producer(void* arg) {
    int item = 0;
    while(item < 5) {
        sem_wait(&empty);
        pthread_mutex_lock(&mutex);
        buffer[in] = ++item;
        printf("Producer: item %d inserted at %d\n", item, in);
        in = (in + 1) % SIZE;
        pthread_mutex_unlock(&mutex);
        sem_post(&full);
        sleep(1);
    }
    return NULL;
}

void* consumer(void* arg) {
    int item, count = 0;
    while(count < 5) {
        sem_wait(&full);
        pthread_mutex_lock(&mutex);
        item = buffer[out];
        printf("Consumer: item %d removed from %d\n", item, out);
        out = (out + 1) % SIZE;
        pthread_mutex_unlock(&mutex);
        sem_post(&empty);
        count++;
        sleep(1);
    }
    return NULL;
}

int main() {
    pthread_t p, c;
    sem_init(&empty, 0, SIZE);
    sem_init(&full, 0, 0);
    pthread_mutex_init(&mutex, NULL);
    pthread_create(&p, NULL, producer, NULL);
    pthread_create(&c, NULL, consumer, NULL);
    pthread_join(p, NULL);
    pthread_join(c, NULL);
    return 0;
}

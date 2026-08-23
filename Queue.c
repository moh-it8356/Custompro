#include <stdio.h>
#define SIZE 5
int items[SIZE], front = -1, rear = -1;
void enqueue(int value) {
    if (rear == SIZE - 1) printf("Full\n");
    else {
        if (front == -1) front = 0;
        rear++;
        items[rear] = value;
    }
}
void dequeue() {
    if (front == -1) printf("Empty\n");
    else {
        front++;
        if (front > rear) front = rear = -1;
    }
}
int main() {
    enqueue(1);
    enqueue(2);
    enqueue(3);
    dequeue();
    return 0;
}

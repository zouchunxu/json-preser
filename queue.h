//
// Created by 邹春旭 on 2017/7/29.
//

#ifndef TEST_QUEUE_H
#define TEST_QUEUE_H

#include <memory.h>
#include <assert.h>

#ifndef QUEUE_SIZE
#define QUEUE_SIZE 255
#endif

int queue[QUEUE_SIZE];

int position = 0;

int *initQueue() {
    memset(queue, 0, QUEUE_SIZE * sizeof(int));
    return queue;
}

int emptyQueue() {
    return position == 0;
}

void pushQueue(int num) {
    queue[position++] = num;
}

int popQueue() {
    assert(position >= 0);
    return queue[position--];
}


#endif //TEST_QUEUE_H

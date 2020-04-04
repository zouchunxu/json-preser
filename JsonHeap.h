//
// Created by 邹春旭 on 2017/10/3.
//

#ifndef TEST_JSONHEAP_H
#define TEST_JSONHEAP_H

#include <stdlib.h>
#include <assert.h>

static char *heap;

int topSize = 0;


char *dream_push(int size) {
    heap = realloc(heap, topSize + size);
    char *res = heap + topSize;
    topSize += size;
    return res;
}


char *dream_pop(int size) {
    assert(size <= topSize);
    topSize = topSize - size;
    return heap + topSize;
}


#endif //TEST_JSONHEAP_H

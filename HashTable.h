//
// Created by 邹春旭 on 2017/7/28.
//

#ifndef TEST_HASHTABLE_H
#define TEST_HASHTABLE_H

#include <stdlib.h>
#include <assert.h>
#include <memory.h>

#ifndef HASH_TABLE_SIZE
#define HASH_TABLE_SIZE 10
#endif
typedef struct hashKV hashKV;
typedef struct hashTable hashTable;

int getHashKey(int key);

struct hashKV {
    int key;
    char *val;
    hashKV *next;
};

struct hashTable {
    hashKV **hash;
};

hashTable *initHashTable() {
    hashTable *hash = malloc(sizeof(hashTable));
    hash->hash = malloc(sizeof(hashKV) * HASH_TABLE_SIZE);
    memset(hash->hash, 0, sizeof(hashKV *) * HASH_TABLE_SIZE);
    return hash;
}

int getHashKey(int key) {
    assert(key >= 0);
    return key % HASH_TABLE_SIZE;
}

void insertHash(hashTable *hashTable, int key, char *val) {
    int tableNum = getHashKey(key);
    hashTable->hash[tableNum] = malloc(sizeof(hashKV));
    hashTable->hash[tableNum]->key = key;
    hashTable->hash[tableNum]->val = val;
}


#endif //TEST_HASHTABLE_H

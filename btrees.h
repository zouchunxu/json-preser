#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <assert.h>
#include <time.h>

#define M (4)
#define LIMIT_M_2 (M % 2 ? (M+1) / 2: M/2)

typedef struct BPlusNode *BPlusTree, *Position;
typedef int KeyType;
struct BPlusNode {
    int KeyNum;
    KeyType Key[M + 1];
    BPlusTree Children[M + 1];
    BPlusTree Next;
};

extern BPlusTree Initialize();

extern BPlusTree Insert(BPlusTree T, KeyType key);

extern BPlusTree Remove(BPlusTree, KeyType key);

extern BPlusTree Destroy(BPlusTree T);

extern void Travel(BPlusTree T);

extern void TravelData(BPlusTree T);


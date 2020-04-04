#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <assert.h>
#include <time.h>

#define M 4
#define LIMIT_M_2 (M % 2 ? (M+1) / 2: M/2)

typedef struct BPlusTreeNode treeNode;


struct BPlusTreeNode {
    int type;
    int keyNum; // 当前数量
    int keys[M - 1]; // 索引
    union {

        // 只有非叶子节点才有
        struct {
            treeNode *children[M]; // 子节点
        } c;

        // 只有叶子节点才会有
        struct {
            int data[M]; // 数据
            treeNode *prev;
            treeNode *next;
        } leaf;
    };

};


void insertNode(treeNode *node, int val);

treeNode *searchNode();



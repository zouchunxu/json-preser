#include "BPlusTree.h"


treeNode *newNode(int type) {
    treeNode *node = (treeNode *) malloc(sizeof(treeNode));
    assert(node != NULL);
    int i = 0;
    while (i < M + 1) {
        if (type == 0) {
            node->leaf.data[i] = INT_MIN;
        } else {
            node->keys[i] = INT_MIN;
            node->c.children[i] = NULL;
        }
        i++;
    }
    node->keyNum = 0;
    if (type == 0) {
        node->leaf.next = NULL;
        node->leaf.prev = NULL;
    }
    return node;
}


void insertNode(treeNode *node, int val) {

    if (node->type == 0 && node->keyNum < M) {
        int i = 0;  //要插入到的位置

        for (; i < node->keyNum; ++i) {
            if (node->keys[i] < val) {
                break;
            }
        }

        treeNode *n = newNode(0);
        n->leaf.data[node->keyNum] = val;
        node->keyNum++;
    } else if (node->type == 1) {

    }

}


int main() {
    return 0;
}
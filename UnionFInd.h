//
// Created by 邹春旭 on 2017/7/28.
//

#ifndef TEST_UNIONFIND_H
#define TEST_UNIONFIND_H

void initUnfind(int a[], int parent[], int rank[], int count) {
    for (int i = 0; i < count; ++i) {
        a[i] = i;
        parent[i] = i;
        rank[i] = 1;
    }
}

int unionFind(int parent[], int p) {
    if (parent[p] != p) {
        parent[p] = unionFind(parent, parent[p]);
    }
    return parent[p];
}

int isConnentd(int parent[], int p, int q) {
    return unionFind(parent, p) == unionFind(parent, q);
}

void unionElements(int parent[], int rank[], int p, int q) {

    int pRoot = unionFind(parent, p);
    int qRoot = unionFind(parent, q);

    if (parent[pRoot] == parent[qRoot]) {
        return;
    }

    if (rank[pRoot] < rank[qRoot]) {
        parent[pRoot] = qRoot;
    } else if (rank[pRoot] > rank[qRoot]) {
        parent[qRoot] = pRoot;
    } else {
        parent[pRoot] = qRoot;
        rank[qRoot]++;
    }
}


#endif //TEST_UNIONFIND_H

//
// Created by 邹春旭 on 2017/7/29.
//

#ifndef TEST_GRAPH_H
#define TEST_GRAPH_H

#include "queue.h"

#ifndef GRAPH_SIZE
#define GRAPH_SIZE 8
#endif

#ifndef GRAPH_NUM
#define GRAPH_NUM 6
#endif

int count = 0;
int ccount = 0;
int from[255];


void connectGraph(int x, int y, int graph[][GRAPH_SIZE]) {
    for (int i = 0; i < GRAPH_SIZE; ++i) {
        if (graph[x][i] == -1) {
            graph[x][i] = y;
            break;
        }
    }

    for (int i = 0; i < GRAPH_SIZE; ++i) {
        if (graph[y][i] == -1) {
            graph[y][i] = x;
            break;
        }
    }


}

int isConnectd(int x, int y, int graph[][GRAPH_SIZE]) {
    for (int i = 0; i < GRAPH_SIZE; ++i) {
        if (graph[x][i] == y) {
            return 1;
        }
    }
    return 0;
}

void dfs(int graph[][GRAPH_SIZE], int vis[], int i, int data[]) {


    vis[i] = 1;
    for (int j = 0; graph[i][j] != -1; ++j) {
        if (vis[graph[i][j]] == 0) {
            data[count++] = graph[i][j];
            dfs(graph, vis, graph[i][j], data);
        }
    }
}


void graphIterator(int graph[][GRAPH_SIZE]) {
    int vis[GRAPH_NUM], data[255];
    memset(vis, 0, sizeof(int) * GRAPH_NUM);
    for (int i = 0; i < GRAPH_NUM; ++i) {
        if (vis[i] == 0 && graph[i][0] != -1) {
            dfs(graph, vis, i, data);
            ccount++;
        }
    }


    printf("%d\n", ccount);

//    for (int j = 0; j < count; ++j) {
//        printf("%d ", data[j]);
//    }
//    printf("\n");

}


#endif //TEST_GRAPH_H

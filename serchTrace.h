//
// Created by 邹春旭 on 2017/7/26.
//

#ifndef TEST_SERCH_H
#define TEST_SERCH_H

#include <stdlib.h>
#include <memory.h>

typedef struct searchTrace {
    char *val;
    int key;
    struct searchTrace *left;
    struct searchTrace *right;
} trace;

trace *traceInit(int key, char *val) {
    trace *t = malloc(sizeof(trace));
    t->key = key;
    t->val = val;
    t->left = NULL;
    t->right = NULL;
    return t;
}

trace *traceAdd(trace *t, char *v, int key) {
    if (t == NULL) {
        trace *t1 = (trace *) malloc(sizeof(trace));
        t1->val = v;
        t1->key = key;
        t1->left = NULL;
        t1->right = NULL;
        return t1;
    }
    if (t->key == key)
        t->val = v;
    else if (t->key > key)
        t->left = traceAdd(t->left, v, key);
    else
        t->right = traceAdd(t->right, v, key);
    return t;
}

void tracePrint(trace *t) {
    if (t == NULL) {
        return;
    }
    tracePrint(t->left);
    printf("%d ", t->key);
    tracePrint(t->right);

}

trace *traceMax(trace *t) {
    if (t->right == NULL) {
        return t;
    }

    return traceMax(t->right);
}


trace *traceMin(trace *t) {
    if (t->left == NULL) {
        return t;
    }

    return traceMin(t->left);
}

trace *traceSearch(trace *t, int key) {
    if (t == NULL) {
        return NULL;
    }

    if (key == t->key) {
        return t;
    } else if (t->key < key) {
        return traceSearch(t->right, key);
    } else {
        return traceSearch(t->left, key);
    }

}


trace *traceRemove(trace *t, int key) {

    trace *t1 = traceSearch(t, key);

    if (t1 == NULL) {
        return NULL;
    }

    if (t1->left == NULL) {
        trace *tRight = t1->right;
        memcpy(t1, tRight, sizeof(trace));
        free(tRight);
        return t1;
    }

    if (t1->right == NULL) {
        trace *tLeft = t1->left;
        memcpy(t1, tLeft, sizeof(trace));
        free(tLeft);
        return t1;
    }

    trace *min = traceMin(t1->right);
    t1->val = min->val;
    t1->key = min->key;
    free(min);
    return t1;
}

trace *traceRemove1(trace *t, int k) {

    if (t == NULL) {
        return NULL;
    }

    if (t->key < k) {
        t->right = traceRemove(t->right, k);
        return t;
    } else if (t->key > k) {
        t->left = traceRemove(t->left, k);
        return t;
    } else {
        trace *t1 = t;

        if (t1->left == NULL) {
            trace *tRight = t1->right;
            memcpy(t1, tRight, sizeof(trace));
            free(tRight);
            return t1;
        }

        if (t1->right == NULL) {
            trace *tLeft = t1->left;
            memcpy(t1, tLeft, sizeof(trace));
            free(tLeft);
            return t1;
        }


        trace *tmp = traceMin(t->right);
        tmp->right = t->right;
        tmp->left = t->left;
        trace *succ = (trace *) malloc(sizeof(trace));
        memcpy(succ, tmp, sizeof(trace));
        free(tmp);
        return tmp;
    }


}


#endif //TEST_SERCH_H

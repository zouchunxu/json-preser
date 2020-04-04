#include <time.h>
#include <stdlib.h>
#include <math.h>

typedef struct list1 {
    int value;
    struct list1 *next;
} list;


list initList(int n) {
    srand(time(0));
    list head;
    list *tmp;
    tmp = &head;
    for (int i = 0; i < n; ++i) {
        int random = (rand() % (1000 - 100)) + 100;
        tmp->value = random;
        list *t = (list *) malloc(sizeof(list));
        tmp->next = t;
        tmp = t;
    }
    tmp->next = NULL;
    return head;
}

//
void insertList(list *l, int value, int n) {
    list *tmp = l, *tmp1;
    while (n > 0) {
        tmp = tmp->next;
        n--;
    }

    if (tmp == NULL) {
        exit(1);
    }

    tmp1 = tmp->next;
    tmp->next = (list *) malloc(sizeof(list));
    tmp->next->value = value;
    if (tmp1 != NULL)
        tmp->next->next = tmp1;
}


void printList(list *l) {
    list *tmp = l;
    while (tmp->next) {
        printf("%d\n", tmp->value);
        tmp = tmp->next;
    }


}

void mergeArray(list *l, int first, int mid, int last) {
    int i = first, j = mid + 1;
    int m = mid, n = last;
    int k = 0;
    list *t1 = l, *t2 = l;
    int temp[last];

    for (int i1 = 0; i1 < first; ++i1) {
        t1 = t1->next;
    }

    for (int i1 = 0; i1 < mid + 1; ++i1) {
        t2 = t2->next;
    }


    while (i <= m && j <= n) {
        if (t1->value <= t2->value) {
            temp[k++] = t1->value;
            i++;
            t1 = t1->next;
        } else {
            temp[k++] = t2->value;
            t2 = t2->next;
            j++;
        }
    }

//    printf("mid = %d , last = %d \n",mid,last);

    while (i <= m) {
        temp[k++] = t1->value;
        t1 = t1->next;
        i++;
    }

    while (j <= n) {
        temp[k++] = t2->value;
        t2 = t2->next;
        j++;
    }


    for (int k1 = 0; k1 < first; ++k1) {
        l = l->next;
    }

    for (i = 0; i < k; i++) {
        l->value = temp[i];
        l = l->next;
    }

}

void mergeSortBU(list *l, int n) {
    for (int i = 1; i <= n; i += i) {
        for (int j = 0; j + i < n; j += i + i) {
            int tmp = j + i + i - 1;
            if (tmp > n - 1) {
                tmp = n - 1;
            }
            mergeArray(l,j,i+j-1,tmp);
        }
    }
}
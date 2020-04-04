#include <stdlib.h>
#include <assert.h>
#include <math.h>

void printHead(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}


int *init_heap(int count) {

    assert(count != 0);
    int *a = (int *) malloc((count + 1) * sizeof(int));
    return a;
}


void add_heap(int *a, int count) {
    assert(count != 0);
    int *temp = (int *) realloc(a, count * sizeof(int));
    if (temp == NULL) {
        perror("assign room failed");
        exit(1);
    }
    a = temp;
}


void shift_up(int data[], int val, int count) {
    data[count] = val;
    int i = count, tmp;
    while (i > 1 && data[i] > data[i / 2]) {
        tmp = data[i];
        data[i] = data[i / 2];
        data[i / 2] = tmp;
        i /= 2;
    }

}

void shift_down(int arr[], int n, int k) {


    int e = arr[k];
    while (2 * k + 1 < n) {
        int j = 2 * k + 1;
        if (j + 1 < n && arr[j + 1] > arr[j])
            j += 1;

        if (e >= arr[j]) break;


        arr[k] = arr[j];
        k = j;
    }

    arr[k] = e;

}

int arr_pop(int data[], int *count) {
    int pop = data[1];
    shift_down(data, count, 1);
    return pop;
}

void __shiftDown(int data[], int i, int j) {
    int k, tmp, z;
    z = data[i];

    while (i * 2 + 1 < j) {
        k = i * 2 + 1;

        if (k + 1 < j && data[k + 1] > data[k]) {
            k++;
        }

        if (z >= data[k]) break;

        data[i] = data[k];

        i = k;
    }

    data[i] = z;

}


void initHeapByArr(int data[], int count) {

    for (int i = count / 2; i >= 0; --i) {
        __shiftDown(data, i, count);
    }


    int tmp;
    for (int i = count - 1; i > 0; --i) {
        tmp = data[0];
        data[0] = data[i];
        data[i] = tmp;
        __shiftDown(data, 0, i);
    }


}


int heap_sort(int data[], int count) {
    for (int i = count / 2; i > 1; i--) {
        shift_down(data, i, 0);
    }
}


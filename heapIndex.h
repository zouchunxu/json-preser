#include <stdio.h>


int shift_down(int data[], int index[], int red[], int i, int j) {
    int tmp, k;
    int z = index[i];
    tmp = i;
    while (i * 2 + 1 < j) {

        k = i * 2 + 1;
        if (k + 1 < j && data[index[(k + 1)]] > data[index[k]])
            k++;


        if (data[index[k]] <= data[z]) {
            break;
        }

        index[i] = index[k];
        red[index[i]] = i;
        i = k;
    }
    index[i] = z;
    red[index[i]] = i;

}

void init_heap(int data[], int index[], int red[], int count) {

    for (int i = 0; i < count; ++i) {
        index[i] = red[i] = i;
    }


    for (int j = count / 2 - 1; j >= 0; --j) {
        shift_down(data, index, red, j, count);

    }


}

int heap_pop(int data[], int index[], int red[], int *count) {
    int val = data[index[0]];

    index[0] = index[*count - 1];
    (*count)--;
    shift_down(data, index, red, 0, *count);
    return val;
}

void change(int data[], int index[], int red, int i, int val) {
    int ind = red[i];
    change[index[ind]] = val;

}

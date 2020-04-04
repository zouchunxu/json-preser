//
// Created by 邹春旭 on 2017/6/26.
//

#ifndef HELLO_ARRAYHELP_H
#define HELLO_ARRAYHELP_H

#include <time.h>
#include <stdlib.h>


int *buildArray(int *arr, int n, int min, int max) {
    int tmp;
    srand(time(0));

    for (int i = 0; i < n; i++) {
        tmp = (rand() % (max - min)) + min;
        arr[i] = tmp;
    }
    return arr;
}

void printArray(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    putchar('\n');
}

void selectSort(int *arr, int n) {
    int minIndex, tmp;
    for (int i = 0; i < n; i++) {
        minIndex = i;
        for (int j = i; j < n; j++) {
            if (arr[minIndex] > arr[j]) {
                minIndex = j;
            }
        }
        tmp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = tmp;

    }
}

void insertSort(int *arr, int n) {
    int tmp = 0;
    for (int i = 0; i < n - 1; ++i) {
        for (int j = i + 1; j > 0 && arr[j - 1] > arr[j]; j--) {
            tmp = arr[j - 1];
            arr[j - 1] = arr[j];
            arr[j] = tmp;
        }
    }
}

void insertSort1(int *arr, int n) {
    for (int i = 1; i < n; i++) {
        int j = i;
        int tmp = arr[i];
        while (j > 0 && arr[j - 1] > tmp) {
            arr[j] = arr[j - 1];
            j--;
        }
        arr[j] = tmp;

    }
}

void insertSort2(int *arr, int n) {
    for (int i = 1; i < n; i++) {
        int j = i;
        int tmp = arr[j];
        while (j > 0 && arr[j - 1] > tmp) {
            j--;
        }
        for (int k = i; k > j; k--) {
            arr[k] = arr[k - 1];
        }
        arr[j] = tmp;

    }
}


void shellsort(int a[], int n) {
    for (int gap = n / 2; gap >= 1; gap /= 2) {
        for (int i = gap; i <= n; i++) {
            int j = i - gap;

            int tmp = a[j];
            for (; j - gap >= 0 && tmp < a[j - gap]; j -= gap) {
                a[j] = a[j - gap];
            }
            a[j] = tmp;

        }


    }
}


void shellSort1(int arr[], int n) {
    int i, j, tmp, gap;
    gap = n / 2;
    while (gap > 0) {
        for (int i = gap; i < n; i++) {
            j = i;
            while (j - gap >= 0) {
                if (arr[j] < arr[j - gap]) {
                    tmp = arr[j];
                    arr[j] = arr[j - gap];
                    arr[j - gap] = tmp;
                }
                j -= gap;
            }
        }
        gap /= 2;
    }
}


void shellSort2(int arr[], int n) {
    int tmp, j;
    for (int gap = n / 2; gap >= 1; gap /= 2)
        for (int i = gap; i <= n; i++) {
            j = i - gap;
            tmp = arr[i];
            for (; j >= 0 && arr[j] > tmp; j -= gap) {
                arr[j + gap] = arr[j];
            }
            arr[j + gap] = tmp;
        }

}


void copyArray(int *srcArr, int *destArr, int n) {
    for (int i = 0; i < n; i++) {
        destArr[i] = srcArr[i];
    }
}


void printProcessTime(clock_t start, clock_t end) {
    clock_t diff = end - start;
    double d = (double) diff / CLOCKS_PER_SEC;
    printf("program process time %fs \n", d);
}

// 1 2 8 0 4 2
void __mergeArray(int arr[], int first, int mid, int last) {
    int tmp[last];
    int i = first, j = mid + 1, k = 0;

    while (i <= mid && j <= last) {
        if (arr[i] < arr[j]) {
            tmp[k++] = arr[i++];
        } else {
            tmp[k++] = arr[j++];
        }
    }


    while (i <= mid) {
        tmp[k++] = arr[i++];
    }


    while (j <= last) {
        tmp[k++] = arr[j++];
    }


    for (int a = 0; a < k; ++a) {
        arr[first + a] = tmp[a];
    }

}


void myMergeArr(int arr[], int first, int last) {
    if (first < last) {
        int mid = (first + last) / 2;
        myMergeArr(arr, first, mid);
        myMergeArr(arr, mid + 1, last);
        __mergeArray(arr, first, mid, last);
    }
}


void mergeArray(int a[], int first, int mid, int last) {
    int i = first, j = mid + 1;
    int m = mid, n = last;
    int k = 0;
    int temp[last];

    while (i <= m && j <= n) {
        if (a[i] <= a[j])
            temp[k++] = a[i++];
        else
            temp[k++] = a[j++];
    }

//    printf("mid = %d , last = %d \n",mid,last);

    while (i <= m)
        temp[k++] = a[i++];

    while (j <= n)
        temp[k++] = a[j++];

    for (i = 0; i < k; i++)
        a[first + i] = temp[i];

}

void myMergeSort(int arr[], int first, int last) {
    if (first < last) {
        int mid = (last + first) / 2;
        myMergeSort(arr, first, mid);
        myMergeSort(arr, mid + 1, last);
        mergeArray(arr, first, mid, last);
    }
}


void mergeSortBU(int arr[], int n) {
    for (int i = 1; i < n; i *= 2) {
        for (int j = 0; j + i - 1 < n; j += i * 2) {
            int tmp = j + i * 2 - 1;
            if (tmp > n - 1) {
                tmp = n - 1;
            }
            mergeArray(arr, j, j + i - 1, tmp);
        }
    }
}

int __position(int arr[], int i, int j) {
    int l, m, n;
    l = arr[i];
    while (i < j) {
        while (i < j && arr[j] > l)
            j--;

        if (i < j)
            arr[i++] = arr[j];

        while (i < j && arr[i] < l)
            i++;

        if (i < j)
            arr[j--] = arr[i];

    }

    arr[i] = l;

    return i;

}

void __quickSort(int arr[], int i, int j) {
    if (i < j) {
        int p = __position(arr, i, j);

        __quickSort(arr, i, p - 1);
        __quickSort(arr, p + 1, j);
    }

}


void quickSort(int arr[], int n) {
    __quickSort(arr, 0, n);
}

void __quickPosition(int arr[], int i, int j, int n) {

    if (i < j) {
        int p = __position(arr, i, j);
        if (arr[p] > n) {
            __quickPosition(arr, i, p - 1, n);
        } else if (arr[p] < n) {
            __quickPosition(arr, p + 1, j, n);
        } else {
            printf("p=%d\n", p);
        }


    }


}


void quickSort1(int arr[], int i, int j) {
    __quickSort1(arr, i, j);

}

void __quickSort1(int arr[], int i, int j) {
    if (j > i) {
        return;
    }
    int p = position(arr, i, j);
    __quickSort1(arr, i, p - 1);
    __quickSort1(arr, p + 1, j);
}


int position(int arr[], int i, int j) {
    int tmp = arr[i];

    while (i < j) {
        while (i < j && arr[j] > tmp) {
            j--;
        }

        if (i < j) {
            arr[i++] = arr[j];
        }

        while (i < j && arr[i] < tmp) {
            i++;
        }

        if (i < j) {
            arr[j--] = arr[i];
        }
    }
    arr[i] = tmp;
    return i;
}


void quickPosition(int arr[], int i, int j, int n) {
    __quickPosition(arr, i, j, n);
}


#endif //HELLO_ARRAYHELP_H

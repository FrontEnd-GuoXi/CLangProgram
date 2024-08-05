#include <stdio.h>
#include <stdlib.h>
#define NUM_ROW 3
#define NUM_COL 3

int main () {
    int arr[NUM_ROW][NUM_COL];
    int *p;
    for (p = arr; p < &arr[NUM_ROW][NUM_COL]; p++) {
        *p = 0;
        printf("元素的值是：%d;----指针的地址是：%d;\n", *p, p);
    }
    return 0;
}
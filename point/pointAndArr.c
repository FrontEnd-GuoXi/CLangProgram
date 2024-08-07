#include <stdio.h>
#include <stdlib.h>
#define NUM_ROW 3
#define NUM_COL 4

int init_col(int i);
int init_arr();
int find_largest(int arr[], int n);
int print_type ();


// assignment to "int *" from incompatible pointer type "int (*)[3]"

int main()
{
    // init_col(2);
    print_type();
    // init_arr();
    return 0;
}
// http://192.168.31.98:82/-/profile/notifications
int init_arr() {
    int arr[NUM_ROW][NUM_COL];
    int *p;
    int i = 0;
    for (p = &arr[0][0]; p <= &arr[NUM_ROW - 1][NUM_COL - 1]; p++)
    {
        *p = i++;
        printf("\n元素的值是：%d;----指针的地址是：%d;\n", *p, p);
    }
    return 0;
}


int init_col(int i) {
    int arr[NUM_ROW][NUM_COL], acc = 0;
    int (*p)[NUM_COL];
    for (p = &arr[0]; p <= &arr[NUM_ROW-1]; p++) {
        (*p)[i] = 0;
        ++acc;
        printf("\n计算了%d次",acc);
        printf("\n指针地址是：%d", p);
    }
    return 0;
}

int print_type () {
    int arr[NUM_ROW][NUM_COL] = { {1, 2, 3, 4}, {5,6,7,8}, {9,10,11,12} }, (*p)[NUM_COL];
    p = &arr[0];
    printf("\np=%d,arr[0]=%d",p, arr[0]);
    return 0;
}

int find_largest(int arr[], int n)
{
    int i, max;
    max = arr[0];
    for (i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

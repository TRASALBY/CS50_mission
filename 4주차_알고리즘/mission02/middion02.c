#include    <stdio.h>

#define N 4

int findCenter(int arr[], int count);

int main(void) {

    int arr[N] = { 0, 4, 6, 9 };

    int center;

    center = findCenter(arr, N);

    printf("%d", center);

}

int findCenter(int arr[], int count) {
    int index;
    if (count % 2 == 1) {
        index = count / 2;
        return arr[index];
    }
    else {
        index = count / 2;
        return (arr[index] + arr[index - 1]) / 2;
    }
}
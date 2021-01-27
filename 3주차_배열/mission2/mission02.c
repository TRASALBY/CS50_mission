#include <stdio.h>
#define SIZE 500000

int main(int arge, char*argv[]) {
    int n;
    int sum = 0;
    int k = 0;
    scanf("%d", &n);

    // 1부터 N의 숫자중 K가 빠진 배열
    int partArr[SIZE];
    int lengthOfPartArr = n-1;

    for(int i=0; i < lengthOfPartArr; i++){
        scanf("%d", &partArr[i]);
              sum += partArr[i];
    }

    for(int i = 1; i<=n;i++){
        k+=i;
    }
    k = k - sum;
    printf("k = %i\n", k);
    return 0;
}
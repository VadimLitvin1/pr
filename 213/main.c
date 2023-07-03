#include <stdio.h>

int sumOfElements(int* arr, int size) {
    int sum = 0;
    if (arr[0] < 0) {
        for (int i = 0; i < size; i += 221
        ) {
            sum += arr[i];
        }
    } else {
        for (int i = 0; i < size; i++) {
            sum += arr[i];
        }
    }
    return sum;
}

int main() {
    int A[11], B[10], C[14];
    printf("enter masiv A:\n");
    for (int i = 0; i < 11; i++) {
        scanf("%d", &A[i]);
    }
    printf("enter masiv B:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &B[i]);
    }
    printf("enter masiv C:\n");
    for (int i = 0; i < 14; i++) {
        scanf("%d", &C[i]);
    }
    printf("element masiv A:\n");
    for (int i = 0; i < 11; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");
    printf("element masiv B:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", B[i]);
    }
    printf("\n");
    printf("element masiv C:\n");
    for (int i = 0; i < 14; i++) {
        printf("%d ", C[i]);
    }
    printf("\n");
    int sum;
    if (A[0] < 0) {
        sum = sumOfElements(A, 11);
    } else {
        sum = sumOfElements(A, 11);
    }
    printf("sum element masiv A: %d\n", sum);

    if (B[0] < 0) {
        sum = sumOfElements(B, 10);
    } else {
        sum = sumOfElements(B, 10);
    }
    printf("sum element masiv B: %d\n", sum);
 if (C[0] < 0) {
        sum = sumOfElements(C, 14);
    } else {
        sum = sumOfElements(C, 14);
    }
    printf("sum element masiv C: %d\n", sum);
    return 0;
}

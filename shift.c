#include<stdio.h>

void ShiftRight(int* arr, int n) {
    int b = arr[n-1];
    for (int i = n-2; i >= 0; i--) {
        arr[i+1] = arr[i];
    }
    arr[0] = b;
}

void ShiftRight_k(int* arr, int n, int k) {
    
    int temp[n];
    
    for (int i = 0; i < n; i++) {
        temp[(i+k) % n] = arr[i];
    }
    
    for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }
    
}

int main() {
    const int MAX_LENGTH = 5;
    int i, a[MAX_LENGTH];
    
    for(i=0; i<MAX_LENGTH; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    
    //ShiftRight(a, MAX_LENGTH);
    ShiftRight_k(a, MAX_LENGTH, 2);
    
    for (i=0; i<MAX_LENGTH; i++) {
        printf("%d \n", a[i]);
    }
    
    return 0;
}
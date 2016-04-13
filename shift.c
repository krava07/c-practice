#include<stdio.h>

void ShiftRight(int* arr, int n) {
    int b = arr[n-1];
    for (int i=n-2; i>=0; i--) {
        arr[i+1]=arr[i];
    }
    arr[0]=b;
}

void ShiftRight_k(int* arr, int n, int k) {
    
    for (int i=n-1; i>=0; i--) {
        
    }
    
}

int main() {
    const int MAX_LENGTH = 5;
    int i, a[MAX_LENGTH];
    
    for(i=0; i<MAX_LENGTH; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    
    ShiftRight(a, MAX_LENGTH);
    
    for (i=0; i<MAX_LENGTH; i++) {
        printf("%d \n", a[i]);
    }
    
    return 0;
}
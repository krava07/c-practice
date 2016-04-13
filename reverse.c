#include<stdio.h>

void reverse(int* arr, int n) {
    for (int i=0, j=n-1; i<j; i++, j--) {
        int temp = arr[i];
        
        arr[i] = arr[j];
        arr[j] = temp;
    }
}

int main() {
    const int MAX_LENGTH = 6;
    int i, a[MAX_LENGTH];
    
    for(i=0; i<MAX_LENGTH; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    
    reverse(a, MAX_LENGTH);
    
    for (i=0; i<MAX_LENGTH; i++) {
        printf("%d \n", a[i]);
    }
    
    return 0;
}
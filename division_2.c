#include<stdio.h>



int main() {
    
    int a, b, res, res1;
    printf("Please input a, b");
    scanf("%d %d", &a, &b);
    printf("\n mod = %d", a%b);
    
    if (b<0) {
        b*= -1;
    }
    res = a - a%b;
    if (res>a) {
        res -= b;
    }
    printf("\n Result = %d", res);
    
}
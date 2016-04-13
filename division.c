#include<stdio.h>
 
 
 
int main() {
 
    int a, b, div;
    printf("Please input a, b\n");
    scanf("\n%d %d", &a, &b);
 
    if (b==0) {
        printf("Division by zero!\n");
        return 0;
    }
    if (b<0) {
        b*= -1;
    }
 
    div = a/b;
    if (a%b != 0) {
        if (a>0) {
            printf("Result = %d\n", div*b);
        }
        if (a<=0) {
            printf("Result = %d\n", (div-1)*b);
        }
    }
    else {
        printf("Result = %d\n", div*b);
    }
 
return 0;
}
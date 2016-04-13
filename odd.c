#include<stdio.h>



int main() {
    
    int a, b;
    printf("Please input a, b");
    scanf("%d %d", &a, &b);
    if (a % 2 == 0) {
            a += 1;
        }
    for ( ; a<=b; a=a+2 ) {
        printf("%d\n", a);      
    }
}

#include<stdio.h>
//#include<iostream>
    
int main(int argc, char const *argv[])
{
    int a, b, c, d, e, max;
    printf("Please input a,b,c,d,e");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    
    if (a>b) {
        max=a;
    }
    else {
        max=b;
    }
    if (max<c){
        max=c;
    }
    if (max<d){
        max=d;
    }
    if (max<e) {
        max=e;
    }
    
    printf("%d\n", max);
    return 0;
}
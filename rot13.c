#include<stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{   
    // char[] abc = {"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"};
    // char[] rot = {"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm"};
    int c,d;

    while((c=getchar())!=EOF)
    {
        if (c>='A' && c<='Z') {
            d=c+13;
            if (d>'Z'){
                d = c-13;
            }
            putchar(d);   
        }
        else  
        if (c>='a' && c<='z') {
            d=c+13;
            if (d>'Z'){
                d = c-13;
            }
            putchar(d);
        }
        else {
            putchar(c);
        }
    }

return 0;
}
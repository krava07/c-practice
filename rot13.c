#include<stdio.h>

int main()
{
    int c,d;

    while((c=getchar())!=EOF)
    {
        if (c>='A' && c<='Z') {
            if ((d=c+13) <= 'Z') {
                putchar(d);
            } else {
                d=c-13;
                putchar(d);
            }
        }
        else  
        if (c>='a' && c<='z') {
            if ((d=c+13) <= 'z') {
                putchar(d);
            } else {
                d=c-13;
                putchar(d);
            }
        }
        else {
            putchar(c);
        }
    }


return 0;
}
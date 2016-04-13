#include<stdio.h>
#include <string.h>
#include <stdlib.h>
// abc = {"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"};
// rot = {"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm"};
void rot13(char str[])
{
    int i, len = strlen(str);
    for (i=0; i<=len; i++) {
        
        if (str[i]>='a' && str[i]<='z') {
            if (str[i]<'n') {
                str[i] += 13;
            } else {
                str[i] -= 13;
            }
        } else if (str[i]>='A' && str[i]<='Z') {
            if (str[i]<'N') {
                str[i] += 13;
            } else {
                str[i] -= 13;
            }
        }
    }
}

int main()
{
    const int MAX_LENGTH = 1000;
    char string[MAX_LENGTH];
    
    printf("Input text: ");
    fgets(string, MAX_LENGTH, stdin); 
    rot13(string);
    printf("%s\n", string);
    
    return 0;
}

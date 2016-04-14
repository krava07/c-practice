#include<stdio.h>

void ShiftRight(int* arr, int n) {
    int b = arr[n - 1];
    for (int i = n-2; i >= 0; i--) {
        arr[i+1] = arr[i];
    }
    arr[0] = b;
}

void Shift_k(int* arr, int length, int shift) {
    
    int sh = shift;
    
    if (shift<0) {
        shift *= -1;
    }
    shift %= length;            //избавляемся от кратности
    int temp[shift];
    int r = length - shift; 
    
    if (sh >= 0) {                              //сдвиг вправо при shift>0
        
        for (int i = length - 1; i >= r; i--) {   //записываем элементы справа во временный массив
            temp[i-r] = arr[i];
        }
        for (int i = r-1; i >= 0; i--) {        //остальные элементы двигаем вправо
            arr[i+shift] = arr[i];
        }
        for (int i = 0; i < shift; i++) {       //записываем конечный результат в исходный массив
            arr[i] = temp[i];
        }
    } else  {                                   //сдвиг влево при shift<0
        
        for (int i = 0; i < shift; i++) {       //записываем элементы справа во временный массив
            temp[i + r] = arr[i];
        }
        for (int i = shift; i<length; i++) {    //остальные элементы двигаем влево
            arr[i-shift] = arr[i];
        }
        for (int i = r; i<length; i++) {        //записываем конечный результат в исходный массив
            arr[i] = temp[i];
        }
    }
}    
    
    
void ShiftRight_k(int* arr, int length, int shift) {
    if (shift<0) {
        shift *= -1;
    }
    shift %= length;
    int temp[shift];
    int r = length - shift;
    if (r >= shift) {
        for (int i = length-1; i >= r; i--) {
            temp[i - r] = arr[i];
        }
        for (int i = r-1; i >= 0; i--) {
            arr[i+shift] = arr[i];
        }
    } else {
        
    }
    
    
    /*
    for (int i = 0; i < length; i++) {
        temp[(i + shift) % length] = arr[i];
    }
    
    for (int i = 0; i < length; i++) {
        arr[i] = temp[i];
    }
    */
}


int main() {
    const int MAX_LENGTH = 10;
    int i, a[MAX_LENGTH];
    
    for(i=0; i<MAX_LENGTH; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    
    //ShiftRight(a, MAX_LENGTH);
    Shift_k(a, MAX_LENGTH, -2);
    
    for (i=0; i<MAX_LENGTH; i++) {
        printf("%d \n", a[i]);
    }
    
    return 0;
}
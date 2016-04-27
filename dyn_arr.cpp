#include<iostream>

class DynArr
{
    int size;
    int* arr;
public:
    DynArr() {
        size = 0;
        arr = new int [size + 1];
    };
    DynArr(DynArr& x) {
        size = x.size;
        arr = new int [size];
    }
    ~DynArr() {
        delete []arr;
    };
         
};


int main()
{
    DynArr a[5];
    return 0;
}
#include<iostream>
#include <string.h>
#include <stdlib.h>
//#include <cstdlib>

using namespace std;

class DynArr
{
    int size;
    int* arr;
public:
    DynArr() {
        size = 0;
        arr = (int *) calloc(size, sizeof(int));
    };
    DynArr(DynArr& x) {
        free(arr);
        size = x.size;
        arr = (int *) calloc(size, sizeof(int));
    }
    void Add(int x) {
        arr = (int *) realloc(arr, (size+1)*sizeof(int));
        size++;
        arr[size-1] = x;
    }
    void Print() {
        for (int i = 0; i < size; i++) {
            cout<<arr[i]<<" ";
        }
    }
    ~DynArr() {
        free(arr);
    };      
};


int main()
{
    DynArr a;
    a.Add(5);
    a.Add(4);
    a.Add(3);
    a.Add(2);
    a.Add(1);
    
    a.Print();
    cout<<endl;
    return 0;
}
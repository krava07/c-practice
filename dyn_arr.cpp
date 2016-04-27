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
        arr = (int *) malloc(size*sizeof(int));
        if (!arr) {
            cout<<"Error!"<<endl;
            exit(0);
        }
    };
    // DynArr(DynArr& x) {
    //     //free(arr);
    //     size = x.size;
    //     arr = (int *) malloc(size*sizeof(int));
    //     if (arr == NULL) {
    //         cout<<"Error!"<<endl;
    //         exit(0);
    //     }
    // }
    void Add(int x) {
        int newSize = size + 1;
        int* temp = (int *) realloc(arr, (newSize)*sizeof(int));
        try {
            if (!arr) {
            throw    
        }
        arr = temp;
        arr[size] = x;
        size = newSize;
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
    a.Add(9);
    a.Add(0);
    a.Add(1);
    
    a.Print();
    cout<<endl;
    return 0;
}
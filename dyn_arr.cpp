#include<iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;

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
        delete [] arr;
        size = x.size;
        arr = new int [size];
    }
    void Add(int x) {
        int *temp = new int [size + 1];
        for(int i = 0; i < size; ++i) {
            temp[i] = arr[i];
        }
        
        delete [] arr;
        arr = temp;
 
        arr[size] = x;
        ++size;
    }
    void Print() {
        for (int i = 0; i < size; i++) {
            cout<<arr[i]<<" ";
        }
    }
    ~DynArr() {
        delete []arr;
    };      
};


int main()
{
    DynArr a;
    a.Add(5);
    a.Add(4);
    a.Add(3);
    a.Add(2);
    
    a.Print();
    return 0;
}
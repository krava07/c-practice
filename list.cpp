#include<iostream>

using namespace std;

struct element
{
    int x;
    element *Next;
};

class List
{
    element *Head;
    int length;
    
    public:
        List() {
            Head = NULL;
            length = 0;
        };
        ~List() {
             while (Head!=NULL) {     
                element *temp = Head->Next; 
                delete Head;
                Head = temp;
            }
        };
        int Count() {
            return length;
        };
        void Push(int x) {
            length++;
            element *temp = new element;
            temp->x = x;
            temp->Next = Head;
            Head = temp;
        };
        void Pop(int n) {
            element *temp = Head;
            if ((Head != NULL) && (n < length)) {
                for (int i = 0; i < n; ++i)
                {
                    temp = temp->Next;
                }
            }
        }
        void Print() {
            element *temp = Head;
            while (temp != NULL) {
                cout<< temp->x <<endl;
                temp = temp->Next;
            }
        };
};

int main() {
    int n, x;
    List l;
    cout<<"please input n= "<<endl;
    cin>>n;
    
    for (int i = 0; i < n; ++i)
    {
        cout<<"x"<<i<<"= "<<endl;
        cin>>x;
        l.Push(x);
    }
    
    l.Print();
}
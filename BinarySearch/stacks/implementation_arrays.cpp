#include <iostream>
using namespace std;

class stack
{
public:
    int data;

    int arr*;
        int size;
    int top;

    // constructor
    stack(int data, int size)
    {
        this->data = data;
         this->size = size;
        this->arr= new arr[this->size];

        this->top = -1;
    }
};
void push(int data){
    if(size-top>1){

        top++;
        arr[top]= data;

    }
}
void top(int data){
if(top!=size){
    cout<<arr[top]->data;
}
}

int main()
{

    stack s1(12, 2);
    // check implementation
    // cout << s1.size << endl;
    // cout << s1.data;
     s1.push(20);
      s1.push(30);
       s1.push(40);
        s1.push(50);
    return 0;
}
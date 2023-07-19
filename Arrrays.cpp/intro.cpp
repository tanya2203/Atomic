#include <iostream>
using namespace std;



void print (int arr[4], int n){


    for(int i=0;i<n;i++){
  cout<<arr[i]<<endl;
    }
}
int main(){

int arr[10]= {1};

int arr1[10]={1,2,3};

int size = sizeof(arr1)/sizeof(int);
cout<<"size is "<<size<<endl;;
// cout<<arr[0];
// cout<<arr[7];
print(arr,6);

    return 0;
}
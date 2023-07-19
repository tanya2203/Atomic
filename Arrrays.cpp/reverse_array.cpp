#include <iostream>
using namespace std;


void reversearr(int arr[],int n){
// phle input yhi do taki address nahi sare n tak mile
for(int i=0;i<n;i++){
    cin>>arr[i];
}
for(int i=n-1;i>=0;i--){
    cout<<arr[i]<<endl;;
}
}
void SwapAlt(int arr[], int n){



for(int i=0;i<n;i++){
    cin>>arr[i];
}
    for(int i=0;i<n-1;i+=2){
    //    int temp = arr[i];
    //    arr[i]= arr[i+1];
    //    arr[i+1]=temp;
    swap(arr[i],arr[i+1]);
    }
}
int main(){


int n;
cin>>n;
int arr[n];

reversearr(arr,n);
SwapAlt(arr,n);

for (int i=0;i<n;i++){
    cout<<arr[i]<<endl;
}

// using swapping




    return 0;

}
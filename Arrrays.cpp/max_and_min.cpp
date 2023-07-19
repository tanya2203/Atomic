#include <iostream>
using namespace std;
// Find MAX
void Maxi( int arr[], int n){

    int max = INT_MIN;
    for(int i =0;i<n;i++){
        if(max<arr[i]){
            max =arr[i];
        }

    }
    cout<<max<<endl;;
 
}





// Find MIN
void Mini( int arr[], int n){

    int min = INT_MAX;
    for(int i =0;i<n;i++){
        if(min>arr[i]){
            min= arr[i];
        }

    }
    cout<<min;;
}

int main(){
int n;
cin>>n;

int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
Maxi(arr,n);
cout<<"min"<<endl;
Mini(arr,n);


    return 0;
}
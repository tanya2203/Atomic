#include <iostream>
using namespace std;


bool linearSearch(int arr[],int n,int key){

for(int i =0;i<n;i++){
    if(arr[i]==key){
    return true;
    }
 
  
}
return false;

}
int main(){

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bool linear = linearSearch(arr,n,2);

if(linear ){
    cout<<"present";
}
    else {
        cout<<"not present";

    }








    return 0;
}
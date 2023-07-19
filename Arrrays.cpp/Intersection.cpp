#include <iostream>
using namespace std;




int  FindIntersection(int arr1[],int arr2[],int n,int m){


for(int i=0;i<n;i++){
    cin>>arr1[i];
}


for(int i=0;i<m;i++){
    cin>>arr2[i];
}
for(int i =0;i<n;i++){
    for(int j=0;j<m;j++){
    if(arr1[i]==arr2[j]){
        return arr1[i];
    }
    }
}

  return -1;
 }
int main(){
int n;
cin>>n;
int m;
cin>>m;

int arr1[n];
int arr2[m];
 int result = FindIntersection(arr1,arr2,n,m);
cout<<result;

    return 0;

}
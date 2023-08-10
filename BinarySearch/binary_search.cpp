#include<iostream>
using namespace std;


int BinarySearch (int arr[],int n,int key){

//mid 

int s= 0;
int e= n-1;
while(s>=e){
int mid = (s+e)/n;


if(arr[mid]==key){
    return mid;
}
//greater
if(key>arr[mid]){
s= mid+1;

}

// smaller 
else if(key<arr[mid]){
    e= mid -1;

}


}



return -1;

}



int main(){


int arr[8]= {1 ,2 ,4 ,7, 8 ,9 ,12 ,17 };


int key;
cin>>key;
int ans = BinarySearch(arr,8,key);

cout<<ans;


    return 0;
}
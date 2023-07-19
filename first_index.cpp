
// #include <iostream>

// using namespace std;

// int out = 0;

// int index( int a[],int n,int x){
//     if(n==-1){
//         return -1;
//     }
//     if(a[n]==x){
//         return n;
//     }
//     int ans = index(a,n-1,x);
//     if(ans==-1){
//         out = -1;
//     }
//     else{
//         out = ans;
//     }
//     return out;
// }
// int
// main ()
// {
//  int n;
//  cin>>n;
//  int x=5;
//  int a[n];
//  for(int i=0;i<n;i++){
//      cin>>a[i];
//  }
// int out = index(a,n,x);
// cout<<out;
//   return 0;
// }





#include <iostream>

using namespace std;

int out = 0;

int index( int a[],int n,int x){
    if(n==0){
        return -1;
    }
    if(a[0]==x){
        return 0;
    }
    int ans = index(a+1,n-1,x);
    if(ans==-1){
        out = -1;
    }
    else{
        out = ans+1;
    }
    return out;
}
int
main ()
{
 int n;
 cin>>n;
 int x=5;
 int a[n];
 for(int i=0;i<n;i++){
     cin>>a[i];
 }
int out = index(a,n,x);
cout<<out;
  return 0;
}


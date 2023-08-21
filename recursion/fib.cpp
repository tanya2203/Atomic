#include <iostream>
using namespace std;




 int  fib(int n){
//nbase case
if(n==0){
    return 0;
}
if(n==1){
    return 1;
}


int n1= fib(n-1);
int n2 = fib(n-2);
int fib = n1+n2;
return fib;

 }

int main(){


int n;
cout<<"enter number";
cin>>n;
int ans = fib(n);
cout<<ans;

    return 0;
}
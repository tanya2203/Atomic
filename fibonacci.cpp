
#include <iostream>

using namespace std;



int fib(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    else{
        int smallout= fib(n-1);
        int smallout2= fib(n-2);
        return smallout+smallout2;
    }
}
int main()
{
int n;
cin>>n;
int out = fib(n);
cout<<out;

    return 0;
}
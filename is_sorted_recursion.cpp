/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

bool issorted(int a[],int n){
    if(n==0 || n==1){
        return true;
        
    }
    
    else if(a[0]>a[1]){
        return false;
    }
    bool  smallout = issorted(a+1,n-1);
    return smallout;
}



int main()
{
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
bool out = issorted(a,n);
cout<<out;

    return 0;
}



// second method

#include <iostream>

using namespace std;

bool issorted(int a[],int n){
    if(n==0 || n==1){
        return true;
        
    }
     bool  smallout = issorted(a+1,n-1);
    if(!smallout){
        return false;
    }
    
    
    if(a[0]>a[1]){
        return false;
        
        
    }
    else{
        return true;
    }
   
}



int main()
{
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
bool out = issorted(a,n);
cout<<out;

    return 0;
}



#include <iostream>
#include <map>
using namespace std;

int main()
{
     int n;
     cin>>n;
     int a[n];
     for(int i=0;i<n;i++){
         cin>>a[i];
     }
     map<int,int>m;
     for(int i=0;i<n;i++){
         m[a[i]]++;
         
     }
    //   
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    
    
    
    

    return 0;
}


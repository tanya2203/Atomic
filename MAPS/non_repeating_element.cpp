
#include <bits/stdc++.h>
// #include <ordered_map>


using namespace std;

int main()
{

//first non-repeating element in an std::array ;

int a[6]={1,2,1,5,6,6};
map<int,int>m;
for(int i=0;i<6;i++){
    m[a[i]]++;
}
for(auto i:m){
    
    
    cout<<i.first<<" "<<i.second<<endl;
}
    
    cout<<"printing ans"<<endl;
    for(auto i:m){
    
    
    if(i.second==1){
        cout<<i.first<<endl;
        break;
        
    }
    }

    return 0;
}
// first repeating element


#include <bits/stdc++.h>
// #include <ordered_map>


using namespace std;

int main()
{

//first non-repeating element in an std::array ;

int a[6]={1,2,1,5,6,6};
map<int,int>m;
for(int i=0;i<6;i++){
    m[a[i]]++;
}
for(auto i:m){
    
    
    cout<<i.first<<" "<<i.second<<endl;
}
    
    cout<<"printing ans"<<endl;
    for(auto i:m){
    
    
    if(i.second>1){
        cout<<i.first<<endl;
        break;
        
    }
    }

    return 0;
}
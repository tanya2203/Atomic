
#include <bits/stdc++.h>
#include <unordered_map>


using namespace std;

int main()
{

// unordered_map<string,int> m;
// m["mera"]=1;
// m["naam"]=2;
// m["tanya"]=3;
// m["hai"]=4;
// for(auto i: m){
//     cout<< i.first<<" "<<i.second<<endl;
// }
// for(auto i= m.begin();i!=m.end();i++){
//     cout<<i->first<<" " <<i->second<<endl;
// }
// string key = "mera";
// if(m.find(key)!=m.end()){
//     // cout<<"key not found";
//     auto temp = m.find(key);
//     cout<<temp->first<<" "<<temp->second;
// }
// else{
//     cout<<"key found";
// }


int a[22]={1,2,1,2,4,5,4,5,6,4,5,3,7,8,6,7,5,3,4,9,7,6};
unordered_map<int,int>m;
for(int i=0;i<22;i++)
{
    // int key = a[i];
    // m[key]++;
    
    m[a[i]]++;
    // cout<<m[a[i]]<<endl;
    
}

cout<<" after it"<<endl;
for(auto i:m){
    cout<<i.first<<" "<<i.second<<endl;
}
    return 0;
}

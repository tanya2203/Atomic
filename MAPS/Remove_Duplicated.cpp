#include <iostream>
#include <vector>
#include <unordered_map>
 using namespace std;

vector<int>removeDuplicates( int*a , int size)
{
    vector<int>out;
    
    unordered_map<int,bool>mp;
    for(int i=0;i<size;i++){
     if(mp.count(a[i])>0){
         continue;
        }

         mp[a[i]]=true;
         out.push_back(a[i]);
        
    }
    return out;
}
int main() {
    
    int a[]= {1 ,3 ,3, 4,2 ,2,5};
    vector<int>out= removeDuplicates(a,7);
for(int i=0;i<out.size();i++)
{
    cout<<out[i]<<endl;
}    
    
    
    
    return 0;
}
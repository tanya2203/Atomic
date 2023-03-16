int migratoryBirds(vector<int> arr) {
    map<int,int>mp;
    sort(arr.begin(),arr.end());
    for(int i =0;i<arr.size();i++){
        mp[arr[i]]++;
    }
    int max =0;
    int ans =0;
for( auto i : mp){
    if(i.second >max ){
        max = i.second;
        ans = i.first;
        cout<<ans<<endl;
        
        }
    
    
}

return ans;
}
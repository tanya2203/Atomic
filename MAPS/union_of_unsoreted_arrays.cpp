 int NumberofElementsInIntersection(int a[], int b[], int n, int m) {
        map<int,int>mp;
       int count=0;
     sort(a,a+n);
     sort(b,b+m);
     for(int i=0;i<n;i++){
         if(a[i]!=a[i+1]){
            //  m.insert(a[i]);
            mp[a[i]]++;
                         }
         
                     }
      for(int i=0;i<m;i++){
         if(b[i]!=b[i+1]){
          mp[b[i]]++;
                        }
      }
         
         for(auto i:mp){
             if(i.second>1){
                 count++;
                 
                }
         }
         return count;
    }
    
};
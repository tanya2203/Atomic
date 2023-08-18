#include <iostream>
#include <vector>
using namespace std;



string  SortString(string &s){

    //strouing the elements in counter array

vector<int>freq(26,0);
for(int i=0;i<s.size();i++){
  int index = s[i]-'a';   //0
  freq[index]++;

}
//create sorting string
int j=0;

for(int i=0;i<26;i++){
while(freq[i]--){
    s[j]=i+'a';
    j++;
}

}
return s;

}
int main(){




string s;
cout<<"enter string"<<endl;
cin>>s;
cout<<"sorted string is"<<endl;
cout<<SortString(s);



    return 0;
}
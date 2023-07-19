#include <iostream>
using namespace std;


 bool CheckPalindrome(string name){
 int s= 0;
 int e= name.size()-1;
 while(s<=e){

if(name[s]==name[e]){
    return true;
}
s++;
e--;

 }
 return false;
 }




int main(){



string name;
cin>>name;
 bool ans =CheckPalindrome(name);
cout<<ans;



    return 0;
}
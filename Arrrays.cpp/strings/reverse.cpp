#include <iostream>
using namespace std;



void reverse( string name){

int e = name.size();
int s= name[0];
while(s<=e){
    swap(name[s],name[e]);
       s++;
       e--;
}
cout<<name<<endl;
}
int main(){


string name = "Tanya";
reverse( name);






    return 0;
}
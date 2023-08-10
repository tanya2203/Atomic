/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
using namespace std;





bool FindTarget(int a[][3],int targetValue){
    
    for(int i =0;i<3;i++){
    for(int j=0;j<3;j++){
        if(a[i][j]==targetValue)
        return true;
        
    }
    
    
    
    
}
return false;

    

}

void rowsum(int a[3][3]){
  
    for(int i =0;i<3;i++){
          int sum =0;
    for(int j=0;j<3;j++){
        // cout<<a[i][j]
        
        sum+=a[i][j];
    }
    
    cout<<sum<<endl;

    
}
    cout<<endl;
}



void largestsum(int a[3][3]){
            int maxi= -12344;
            int rowindex = -1;
            int i;
    for( i =0;i<3;i++){
          int sum =0;

    for(int j=0;j<3;j++){
        // cout<<a[i][j]
        
        sum+=a[i][j];
    }
    if(sum>maxi){
        maxi=sum;
        rowindex= i;
    }
    
   

    
}
 cout<<"rowindex"<<rowindex<<endl;
 cout<<maxi<<endl;

    cout<<endl;
}
int main(){


int a[3][3];
int targetValue =45;





// taking input 


cout<<"give Input"<<endl;
for(int i =0;i<3;i++){
    for(int j=0;j<3;j++){
        cin>>a[i][j];
    }
}
// printing the array
cout<<"printing rows wise"<<endl;

for(int i =0;i<3;i++){
    for(int j=0;j<3;j++){
        cout<<a[i][j];
    }
        cout<<endl;
}
cout<<"printing col wise"<<endl;

for(int j =0;j<3;j++){
    for(int i=0;i<3;i++){
        cout<<a[i][j];
    }
    cout<<endl;
}


    



//  finding the element 

bool target = FindTarget(a,targetValue);
if(target){
    cout<<"found";
}
else {
    cout<<"not found"<<endl;
}


//findind row wise sum

cout<<"row wise sum"<<endl;
rowsum(a);
cout<<endl;

//findindcol wise sum
cout<<"largest sum"<<endl;
largestsum(a);

    return 0;
}
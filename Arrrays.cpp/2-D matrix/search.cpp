#include <iostream>
using namespace std;





bool FindTarget(int a[][3],int targetValue){
    
    for(int j =0;j<2;j++){
    for(int i=0;i<3;i++){
        if(a[j][i]==targetValue)
        return true;
        
    }
    
    
    
    
}
return false;

    

}
int main(){


int n;
int m;

int targetValue =3;
int a[2][3];
for(int j =0;j<2;j++){
    for(int i=0;i<3;i++){
        cin>>a[j][i];
    }
}

bool target = FindTarget(a,targetValue);
cout<<target;



    return 0;
}
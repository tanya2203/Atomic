// #include <iostream>
// using namespace std;

// int main(){




// char c= 's';
// // cout<<sizeof(c);
// char ch[20]="Tanya Verma";

// char name[20];
// cin>>name;
// cout<<" your name is ";
// cout<<name;
// cout<<"name is 2";

//     return 0;
// }





#include <iostream>
using namespace std;

int main() {
    char c = 's';
    // cout<<sizeof(c);
    char ch[20] = "Tanya Verma";

    char name[20] = {'\0'}; // Initialize with null characters
    cin.getline(name, 20);  // Read input and limit the characters to avoid buffer overflow

    cout << "Your name is: ";
    cout << name << endl; // Using endl to flush the output and start a new line
    cout << "Name is 2";

    return 0;
}

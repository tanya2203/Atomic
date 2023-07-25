// #include <iostream>
// using namespace std;


// char ToLowerCase(char ch )
// {
//     if(ch>='a' && ch<='z'){
//         return ch;
//     }
//     else {
//         char temp= ch -'A'+'a';
//         return temp;
//     }
// }


//  bool CheckPalindrome(string name){
//  int s= 0;
//  int e= name.size()-1;
//  while(s<=e){

// if(ToLowerCase(name[s])== ToLowerCase(name[e])){
//     return true;
// }
// s++;
// e--;

//  }
//  return false;
//  }




// int main(){



// string name;
// cin>>name;
//  bool ans =CheckPalindrome(name);
// cout<<ans;

//   char ans = ToLowerCase('A');
// cout<<ans;




//     return 0;
// }



#include <iostream>
#include <string>

char ToLowerCase(char ch)
{
    if (ch >= 'a' && ch <= 'z') {
        return ch;
    }
    else {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

bool CheckPalindrome(std::string name)
{
    int s = 0;
    int e = name.size() - 1;
    while (s <= e) {
        if (ToLowerCase(name[s]) != ToLowerCase(name[e])) {
            return false;
        }
        s++;
        e--;
    }
    return true;
}

int main()
{
    std::string name;
    std::cin >> name;
    bool ans = CheckPalindrome(name);
    std::cout << std::boolalpha << ans;

    return 0;
}
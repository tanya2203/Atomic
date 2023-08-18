#include <iostream>
#include <vector>
using namespace std;

bool CheckIsomorphic(string s1, string s2)
{

    if (s1.size() != s2.size())
    {
        return false;
    }
    vector<int> freq(128, -1);
    vector<int>freq2(128,-1);
   
    for (int i = 0; i < s2.size(); i++)
    {
        if(freq[s1[i] - 'a']!=freq2[s2[i] - 'a']){
               return false ;
        }
else {
        int index = s1[i] - 'a';
        int index2 = s2[i] - 'a';
        freq[index]=i;
        freq2[index2]=i;
}
    }
    // for (int i = 0; i < 128; i++)
    // {
    //     if ((freq[i]) != 0)
    //     {egg
    //         return false;
    //     }
    // }
    return true;
}
int main()
{

    string s1, s2;
    cout << "Enter string 1" << endl;
    cin >> s1;
    cout << "Enter string 2" << endl;
    cin >> s2;

    bool ans = CheckIsomorphic(s1, s2);
    if(ans){
        cout<<"Isomorphic"<<endl;
    }
    else {
        cout<<"not Isomorphic"<<endl;
    }

    return 0;
}
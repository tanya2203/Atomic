#include <iostream>
#include <vector>
using namespace std;

bool CheckAnagram(string s1, string s2)
{

    if (s1.size() != s2.size())
    {
        return false;
    }
    vector<int> freq(26, 0);
    for (int i = 0; i < s1.size(); i++)
    {

        int index = s1[i] - 'a';
        int index2 = s2[i] - 'a';
        freq[index]++;
        freq[index2]--;
    }
    for (int i = 0; i < 26; i++)
    {
        if ((freq[i]) != 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{

    string s1, s2;
    cout << "Enter string 1" << endl;
    cin >> s1;
    cout << "Enter string 2" << endl;
    cin >> s2;

    bool ans = CheckAnagram(s1, s2);
    if(ans){
        cout<<"anagram"<<endl;
    }
    else {
        cout<<"not anagram"<<endl;
    }

    return 0;
}
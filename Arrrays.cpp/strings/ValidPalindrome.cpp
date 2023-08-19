#include <iostream>
using namespace std;

int toLowerCase(char ch)
{

    if (ch >= 'A' && ch <= 'Z')
    {
        char lower = ch - 'A' + 'a';
        return lower;
    }
    return ch;
}
bool isValid(char ch)
{
    if (ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z' || ch >= '0' && ch <= 9)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool ValidPalindrome(string s)
{
    string ans = "";

    for (int i = 0; i < s.size(); i++)
    {

        if (isValid(s[i]))
        {
            char ch = toLowerCase(s[i]);
            // valid string
            ans += ch;
        }
        // check in valid string
       
    }
      int i = 0;
    int j = ans.size() - 1;
    while (i <= j)
    {
        if (ans[i++] != ans[j--])
        {
            return false;
        }
    }
    return true;
}

int main()
{

    string s;
    cout<<"INPUT STRING"<<endl;
    getline(cin, s);
    bool ans = ValidPalindrome(s);
    if (ans)
    {

        cout << "Palindrome ";
    }
    else
    {
        cout << "Not Palindrome ";
    }

    return 0;
}
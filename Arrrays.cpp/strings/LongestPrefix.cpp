#include <iostream>
#include <string>
#include <vector>
using namespace std;

string LongestPrefix(vector<string> str)
{
    string ans = " ";
    sort(str.begin(), str.end());

    string first = str[0];
    string last = str[str.size() - 1];
    int i = 0;
    int j = 0;
    while (i != first.size() && j != last.size())
    {
        if (first[i] == last[i])
        {
            ans.push_back(first[i]);
        }
        else {
            break; // Break if characters don't match
        }
        i++;
        j++;
    }
    return ans;
}

int main()
{

    int n;

    cout << "enter number of strings " << endl;
    cin >> n;
    vector<string> str(n);
    for (int i = 0; i < n; i++)
    {
        cin >> str[i];
        cout << "enter string" << endl;
    }
    cout << "longest prefix is " << LongestPrefix(str) << endl;

    return 0;
}
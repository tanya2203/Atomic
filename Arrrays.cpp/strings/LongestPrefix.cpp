#include <iostream>
#include <string>
#include <vector>
using namespace std;

string LongestPrefix(vector<string> str)
{
    if (str.empty())
    {
        return ""; // Return an empty string if the vector is empty
    }

    string ans = str[0]; // Initialize ans with the first string
    for (int i = 1; i < str.size(); i++)
    {
        string next = str[i];
        int k = 0;
        int j = 0;
        int cnt = 0;
        int ans_length = ans.size(); // Use the length of the current ans
        while (k < ans.size() && j < next.size() && ans[k] == next[j])
        {
            cnt++;
            k++;
            j++;
        }
        ans_length = min(ans_length, cnt);
        ans = ans.substr(0, ans_length);

        if (ans.empty())
        {
            break; // No need to continue if the common prefix becomes empty
        }
    }
    return ans;
}

int main()
{
    int n;

    cout << "Enter the number of strings: ";
    cin >> n;

    vector<string> str(n);
    for (int i = 0; i < n; i++)
    {
        cout << "Enter string " << i + 1 << ": ";
        cin >> str[i];
    }

    string longestPrefix = LongestPrefix(str);
    if (!longestPrefix.empty())
    {
        cout << "Longest common prefix is: " << longestPrefix << endl;
    }
    else
    {
        cout << "There is no common prefix among the strings." << endl;
    }

    return 0;
}

// #include <iostream>
// #include <string>
// #include <vector>
// using namespace std;

// string LongestPrefix(vector<string> str)
// {
//     string ans = " ";
//     sort(str.begin(), str.end());

//     string first = str[0];
//     string last = str[str.size() - 1];
//     int i = 0;
//     int j = 0;
//     while (i != first.size() && j != last.size())
//     {
//         if (first[i] == last[i])
//         {
//             ans.push_back(first[i]);
//         }
//         else {
//             break; // Break if characters don't match
//         }
//         i++;
//         j++;
//     }
//     return ans;
// }

// int main()
// {

//     int n;

//     cout << "enter number of strings " << endl;
//     cin >> n;
//     vector<string> str(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> str[i];
//         cout << "enter string" << endl;
//     }
//     cout << "longest prefix is " << LongestPrefix(str) << endl;

//     return 0;
// }
#include <iostream>
using namespace std;

// string ReverseString(string &s)
// {
//     string ans = "";
//     string reversed_string = "";
//     reverse(s.begin(), s.end());
//     int i = 0;
//     while (i != s.size())
//     {
//         if (s[i] != ' ')
//         {
//             ans.push_back(s[i]);
//         }
//         else
//         {
//             // reverse
//             reverse(ans.begin(), ans.end());
//             reversed_string += ans[i];
//             reversed_string += " ";
//             ans = "";
//         }
//     }
//     return reversed_string;
// }

// int main()
// {

//     string s;
//     cout << "Enter string " << endl;
//     getline(cin, s);
//     cout << ReverseString(s);
//     // cout<<ans;

//     return 0;
// }

// #include <iostream>
// #include <algorithm> // For the 'reverse' function
// using namespace std;

// string ReverseString(string &s)
// {
//     string ans = "";             // Store the characters of a word
//     string reversed_string = ""; // Store the reversed words
//     reverse(s.begin(), s.end()); // Reverse the entire input string

//     for (int i = 0; i < s.size(); i++)
//     {
//         if (s[i] != ' ')
//         {
//             ans.push_back(s[i]); // Append non-space characters to 'ans'
//         }
//         else
//         {
//             reverse(ans.begin(), ans.end()); // Reverse the word
//             reversed_string += ans;          // Append the reversed word to 'reversed_string'
//             reversed_string += " ";          // Add a space after each word
//             ans = "";                        // Clear 'ans' for the next word
//         }
//     }

//     reverse(ans.begin(), ans.end()); // Reverse the last word
//     reversed_string += ans;          // Append the last word to 'reversed_string'

//     return reversed_string;
// }

// int main()
// {
//     string s;
//     cout << "Enter string " << endl;
//     getline(cin, s);
//     cout << ReverseString(s);

//     return 0;
// }




    string reverseWords(string s) 
{
    string ans = "";             // Store the characters of a word
    string reversed_string = ""; // Store the reversed words

    size_t i = 0;
    while (i < s.size())
    {
        while (i < s.size() && s[i] == ' ')
        {
            i++; // Skip leading spaces
        }

        ans = ""; // Clear 'ans' for the next word

        while (i < s.size() && s[i] != ' ')
        {
            ans.push_back(s[i]); // Append characters to 'ans'
            i++;
        }

        if (!ans.empty())
        {
            if (!reversed_string.empty())
            {
                reversed_string = ' ' + reversed_string; // Add a space if not the first word
            }
            reversed_string = ans + reversed_string; // Append the word to 'reversed_string'
        }
    }

    return reversed_string;



    }

int main()
{
    string s;
    cout << "Enter string " << endl;
    getline(cin, s);
    cout << reverseWords(s);

    return 0;
}
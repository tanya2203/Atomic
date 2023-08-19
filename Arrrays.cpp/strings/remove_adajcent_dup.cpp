// class Solution {
// public:
//     string removeDuplicates(string s) {

//         string ans;
//         ans.push_back(s[0]); // Initialize the answer string with the first character of the input string 's'.

//         for (int i = 1; i < s.length(); i++) {
//             // Check if the current character 's[i]' is the same as the last character in the answer string 'ans'.
//             if (s[i] == ans.back()) {
//                 // If the current character is the same as the last character in 'ans', it means there's a duplicate.
//                 // Remove the last character from 'ans' to get rid of the duplicate.
//                 ans.pop_back();
//             } else {
//                 // If the current character is different from the last character in 'ans', add it to 'ans'.
//                 ans.push_back(s[i]);
//             }
//         }

//         return ans; // Return the final string 'ans' with duplicates removed.
//     }
// };

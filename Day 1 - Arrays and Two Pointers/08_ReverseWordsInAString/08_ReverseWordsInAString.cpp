#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;



class Solution {
public:
    string reverseWords(string s) {
        int i = 0, j = 0;
        vector<string> string_vector;
        string final_string;
        while (i < s.size()) {
            if (s[i] == ' ') {
                i++;
            } else {
                int start = i, end = i;
                while (end < s.size() && s[end] != ' ') end++;
                string_vector.push_back(s.substr(start, end - start));
                i = end;
            }
        }
        reverse(string_vector.begin(), string_vector.end());

        for (auto it = string_vector.begin(); it != string_vector.end(); ++it) {
            final_string.append(*it); 
        
            if (it + 1 != string_vector.end()) {
                final_string.append(" "); 
            }
        }
        return final_string;
    }

};


int main() {
    Solution s;
    string result = s.reverseWords("  hello world  ");
    cout << result << endl;
    return 0;
}
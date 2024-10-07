#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<char> reverseString_BForce(vector<char>& str) {
        vector<char> result;
        for (int i = str.size() - 1, j = 0; i >=0 ; i--, j++) {
            result.push_back(str[i]);
        }
        return result;
    }
};


int main() {
    Solution s;
    vector<char> str = {'H', 'e', 'l', 'l', 'o'};
    vector<char> reversed_str = s.reverseString_BForce(str);
    for (auto x: str) {
        cout << x << ' ';
    }
    cout << endl;
    for (auto x: reversed_str) {
        cout << x << ' ';
    }
    cout << endl;
    return 0;
}
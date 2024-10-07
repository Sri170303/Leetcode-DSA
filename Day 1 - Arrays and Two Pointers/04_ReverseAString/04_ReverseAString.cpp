#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    void reverseString(vector<char>& str) {
        for (int i = 0, j = str.size() - 1; i < j; i++, j--) {
            char temp = str[i];
            str[i] = str[j];
            str[j] = temp;
        }
    }
};


int main() {
    Solution s;
    vector<char> str = {'H', 'e', 'l', 'l', 'o'};
    for (auto x: str) {
        cout << x << ' ';
    }
    cout << endl;
    s.reverseString(str);
    for (auto x: str) {
        cout << x << ' ';
    }
    cout << endl;
    return 0;
}
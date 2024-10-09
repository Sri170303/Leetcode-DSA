#include<iostream>
#include<unordered_map>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {

        if (s.size() != t.size()) return false;

        unordered_map<char, int> umap;
    
        for (auto c: s) {
            umap[c]++;
        }

        for (auto c: t) {
            if (umap.find(c) == umap.end()) return false;
            umap[c]--;
            if (umap[c] < 0) return false;
        }

        return true;
        
    }
};


int main() {
    Solution s;
    string str1 = "marsk", str2 = "rams";
    cout << "Is s anagaram of t: " << s.isAnagram(str1, str2) << endl;
    unordered_map<char, int> mp;
    cout << mp['A'] << endl;

    return 0;
}
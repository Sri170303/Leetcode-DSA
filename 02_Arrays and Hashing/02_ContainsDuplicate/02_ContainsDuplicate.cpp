#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> umap;

        int i = 0;
        while (i < nums.size()) {
            umap[nums[i]]++;
            i++;
        }
        
        i = 0;
        while (i < nums.size()) {
            if (umap[nums[i]] > 1) return true;
            i++;
        }
        
        return false;
        
    }
};


int main() {
    Solution s;
    vector<int> arg = {1, 2, 1, 3, 1, 4};
    cout << "Contains Duplicate: " << s.containsDuplicate(arg) << endl;
    return 0;
}
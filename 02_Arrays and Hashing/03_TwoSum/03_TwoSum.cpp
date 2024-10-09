#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;


class Solution {
public:
    vector<int> twoSumII(vector<int>& nums, int target) {
        unordered_map<int, int> umap;
        vector<int> result;
        
        int i = 0;
        while (i < nums.size()) {
            int b = target - nums[i];
            if (umap.find(b) != umap.end() && umap[b] != i) {
                result.push_back(umap[b]);
                result.push_back(i);
                return result;
            }
            umap[nums[i]] = i;
            i++;
        }
        return result;
    }
};

int main() {
    Solution s;
    vector<int> arg = {0,0,3,4};
    int target = 0;
    vector<int> result = s.twoSumII(arg, target);
    for (auto x: result) {
        cout << x << ' ';
    }
    cout << endl;
    return 0;
}
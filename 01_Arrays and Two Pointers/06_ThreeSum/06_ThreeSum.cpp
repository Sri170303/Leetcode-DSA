#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


class Solution {
public:
    vector<vector<int>> threeSum(vector<int> &nums) {
        vector<vector<int>> result;
        if (nums.size() < 3) {
            return result;
        }
        sort(nums.begin(), nums.end());
        int i = 0;
        while (i < (nums.size() - 2)) {
            int j = i + 1, k = nums.size() - 1;
            int target = -nums[i];
            while (j < k) {
                if (nums[j] + nums[k] == target) {
                    result.push_back({nums[i], nums[j], nums[k]});
                    j++;
                    k--;
                    while (j < k && nums[j] == nums[j-1]) j++;
                    while (j < k && nums[k] == nums[k+1]) k--;
                } else if (nums[j] + nums[k] < target) {
                    j++;
                    while (j < k && nums[j] == nums[j-1]) j++;
                } else {
                    k--;
                    while (j < k && nums[k] == nums[k+1]) k--;
                }
            }
            i++;
            while (i < (nums.size() - 2) && nums[i] == nums[i-1]) i++;
        }
        return result;
    }
};



int main() {
    Solution s;
    vector<int> arg = {-1,0,1,2,-1,-4};
    vector<vector<int>> result = s.threeSum(arg);
    for (auto &x: result) {
        for (auto &y: x) {
            cout << y << ' ';
        }
        cout << endl;
    }
    return 0;
}
#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> twoSumII(vector<int>& nums, int target) {
        vector<int> result;
        int i = 0, j = nums.size() - 1;
        while (i < j) {
            if (nums[i] + nums[j] == target) {
                result.push_back(i+1);
                result.push_back(j+1);
                return result;
            } else if (nums[i] + nums[j] < target) {
                i++;
            } else {
                j--;
            }
        }
        return result;
    }
};


int main() {
    Solution s;
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> result = s.twoSumII(nums, target);
    for (int x: result) {
        cout << x << ' ';
    }
    cout << endl;
    return 0;
}
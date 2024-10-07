#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> result;
        if (nums.size() < 4) {
            return result;
        }
        sort(nums.begin(), nums.end());
        int i = 0;
        while (i < nums.size() - 3) {
            int j = i + 1;
            while (j < nums.size() - 2) {
                long pair_sum = static_cast<long long>(target) - (nums[i] + nums[j]);
                int left = j + 1;
                int right = nums.size() - 1;
                while (left < right) {
                    if (nums[left] + nums[right] == pair_sum) {
                        result.push_back({nums[i], nums[j], nums[left], nums[right]});
                        left++;
                        right--;
                        while(left < right && nums[left] == nums[left - 1]) {
                            left++;
                        }
                        while(left < right && nums[right] == nums[right + 1]) {
                            right--;
                        }
                    } else if (nums[left] + nums[right] < pair_sum) {
                        left++;
                    } else {
                        right--;
                    }
                }
                j++;
                while (nums[j] == nums[j-1] && j < nums.size() - 2) {
                    j++;
                }
            }
            i++;
            while(nums[i] == nums[i-1] && i < nums.size() - 3) {
                i++;
            }
        }
        return result;         
    }
};


int main() {
    Solution s;
    // vector<int> arg =  {1000000000,1000000000,1000000000,1000000000};
    vector<int> arg =  {1,0,-1,0,-2,2};
    vector<vector<int>> result = s.fourSum(arg, 0);
    for (auto x: result) {
        for (auto y: x) {
                cout << y << ' ';
        }
        cout << endl;
    }
    return 0;
}
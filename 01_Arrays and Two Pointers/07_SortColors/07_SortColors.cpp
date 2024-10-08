#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i = 0, j = 0, k = nums.size() - 1;
        while (j <= k) {
            if (nums[j] == 0) {
                swap(nums[i], nums[j]);
                i++;
                j++;
            } else if (nums[j] == 1) {
                j++;
            } else {
                swap(nums[j], nums[k]);
                k--;
            }
        } 
    }
};




int main() {
    Solution s;
    vector<int> arg = {2,0,2,1,1,0};
    s.sortColors(arg);
    for (auto x: arg) {
        cout << x << ' ';
    }
    return 0;
}
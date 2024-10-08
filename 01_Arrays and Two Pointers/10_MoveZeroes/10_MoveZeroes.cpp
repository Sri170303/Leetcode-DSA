#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


class Solution {
public:
    void moveZeroes(vector<int> &nums) {
        int i = 0, count = 0;
        while (i < nums.size()) {
            if (nums[i] == 0) {
                i++;
            } else {
                swap(nums[i], nums[count]);
                i++;
                count++;
            }
        }
    }
};


int main() {
    Solution s;
    vector<int> arg = {0,1,0,3,12};
    s.moveZeroes(arg);
    for (auto x: arg) {
        cout << x << ' ';
    }
    return 0;
}
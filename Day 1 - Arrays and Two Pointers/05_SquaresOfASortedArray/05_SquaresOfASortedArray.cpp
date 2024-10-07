#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> sortedSquares(nums.size());

        int i = 0, j = nums.size() - 1, k = nums.size() - 1;

        while(i <= j) {
            if (pow(nums[i], 2) <= pow(nums[j], 2)) {
                sortedSquares[k] = pow(nums[j], 2);
                j--;
                k--;
            } else {
                sortedSquares[k] = pow(nums[i], 2);
                i++;
                k--;
            }
        }

        return sortedSquares;
    }
};

int main() {
    Solution s;
    // vector<int> arg = {-4,-1,0,3,10};
    vector<int> arg = {-7,-3,2,3,11};
    for (auto x: arg) {
        cout << x << ' ';
    }
    cout << endl;
    vector<int> sortedSquares = s.sortedSquares(arg);
    for (auto x: sortedSquares) {
        cout << x << ' ';
    }
    cout << endl;
    return 0;
}
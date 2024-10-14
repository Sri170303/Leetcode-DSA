// https://leetcode.com/problems/check-if-array-pairs-are-divisible-by-k/

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int subarraySum(vector<int> &arr, int k) {
        int res = 0; 

    
        for (int s = 0; s < arr.size(); s++) {       
        int sum = 0;   
       
            for (int e = s; e < arr.size(); e++) {
                sum += arr[e];
                if (sum == k)
                    res++;
            }
        }

    return res;
    }

};


int main() {
    Solution s;
    vector<int> nums = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 };
    int k = 3;
    cout << s.subarraySum(nums, k) << endl;
    return 0;
}
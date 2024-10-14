// https://leetcode.com/problems/check-if-array-pairs-are-divisible-by-k/

#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;



class Solution {
public:
    int subarraySum(vector<int> &arr, int sum) {
        unordered_map<int, int> prefixSums;
  
        int res = 0;
        int currSum = 0;

        for (int i = 0; i < arr.size(); i++)
        {
            currSum += arr[i];

            if (currSum == sum)
                res++;

            if (prefixSums.find(currSum - sum) != prefixSums.end())
                res += prefixSums[currSum - sum];

            prefixSums[currSum]++;
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
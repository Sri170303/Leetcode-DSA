#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        int i = m - 1, j = n - 1, k = m + n - 1;

        while (i >=0 && j >= 0) {
            if (nums1[i] >= nums2[j]) 
                nums1[k--] = nums1[i--];
            else
                nums1[k--] = nums2[j--];
        }

        while (i >= 0) {
            nums1[k--] = nums1[i--];
        }

        while (j >= 0) {
            nums1[k--] = nums2[j--];
        }

    }
};



int main() {
    Solution s;
    vector<int> nums1 = {-1, 22, 144, 500, 1111, 20000, 0, 0, 0, 0, 0, 0};
    vector<int> nums2 = {-11, 222, 1244, 5000, 11211, 20000};
    int m = nums1.size() - nums2.size();
    int n = nums2.size();
    s.merge(nums1, m, nums2, n);
    for (auto x: nums1) {
        cout << x << ' ';
    }
    return 0;
}

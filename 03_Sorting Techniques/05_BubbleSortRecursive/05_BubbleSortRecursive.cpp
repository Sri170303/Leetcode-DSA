#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


void bubbleUp(vector<int> &nums, int j, int i = 0) {
    if (i == j)
        return;
    if (nums[i] > nums[i+1]) 
        swap(nums[i], nums[i+1]);
    bubbleUp(nums, j, i + 1);
}


void bubbleSortRecursive(vector<int> &nums, int j) {
    if (j <= 1) 
        return;    
    bubbleUp(nums, j);
    bubbleSortRecursive(nums, j - 1);
}

int main() {
    vector<int> nums = {-100, -22, 20, 111, 4, 2, 200, 24};
    bubbleSortRecursive(nums, nums.size() - 1);
    for (auto x: nums) {
        cout << x << ' ';
    }
    return 0;
}
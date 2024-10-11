#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int minIndex(vector<int> nums, int i, int j)
{   
    if (i == j)
        return i;
 
    int k = minIndex(nums, i + 1, j);
 
    return (nums[i] < nums[k])? i : k;
}

void selectionSortRecursive(vector<int> &nums, int index = 0) {
    if (index == nums.size() - 1)
        return;
    
    int k = minIndex(nums, index, nums.size() - 1);

    if (k != index) 
        swap(nums[k], nums[index]);
    
    selectionSortRecursive(nums, index + 1);
    
}


int main() {
    vector<int> nums = {100, -22, 20, 11, 4, 2, 200, 24};
    selectionSortRecursive(nums);
    for (auto x: nums) {
        cout << x << ' ';
    }
    return 0;
}
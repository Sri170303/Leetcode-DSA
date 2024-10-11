#include<iostream>
#include<vector>
using namespace std;


void insertionSort(vector<int> &nums) {
    for (int i = 1; i < nums.size(); i++) {
        int current_value = nums[i];
        int j = i - 1;
        while (j >= 0 && current_value < nums[j]) {
            nums[j + 1] = nums[j];
            j--;
        }
        nums[j + 1] = current_value;
    }
}


int main() {
    int n = 8;
    vector<int> nums(n, 0); 
    nums = {-22, 100, 22, 2, 45, 11, -3, 65};
    insertionSort(nums);
    for (auto x: nums) {
        cout << x << ' ';
    }
    return 0;
}
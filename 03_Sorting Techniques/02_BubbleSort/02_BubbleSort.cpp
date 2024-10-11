#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void bubbleSort(vector<int> &nums) {
    for (int i = 0; i < nums.size() - 1; i++) {
        int max = nums[i];
        for (int  j = 0; j < nums.size() - 1 - i; j++ ) {
            if (nums[j] > nums[j+1]) swap(nums[j], nums[j+1]);
        }
    }
}


int main() {
    vector<int> arg = {-1, 100, 12, 123, 32, -32, 100};
    bubbleSort(arg);
    for (auto x: arg) {
        cout << x << ' ';
    }
    return 0;
}
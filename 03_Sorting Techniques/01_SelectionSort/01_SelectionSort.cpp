#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


void selectionSort(vector<int> &nums) {

    for (int i = 0; i < nums.size() - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < nums.size(); j++) {
            if (nums[min_idx] > nums[j]) {
                min_idx = j;
            }
        }
        if (min_idx != i) swap(nums[i], nums[min_idx]);
    }
}

int main() {
    vector<int> arg = {100, 2, 0, -1, -23, -100};
    selectionSort(arg);
    for (auto x: arg) {
        cout << x << ' ';
    }
    cout << endl;
    return 0;
}
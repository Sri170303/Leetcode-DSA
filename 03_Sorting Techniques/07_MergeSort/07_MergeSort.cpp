#include<iostream>
#include<vector>
using namespace std;


void mergeTwoSortedArrays(vector<int> &nums, int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    vector<int> Left(n1), Right(n2);

    for (int i = 0; i < n1; i++) {
        Left[i] = nums[left + i];
    }

    for (int j = 0; j < n2; j++) {
        Right[j] = nums[mid + j + 1];
    }


    int i = 0, j = 0, k = left;
    while (i <  n1 && j < n2) {
        if (Left[i] <= Right[j]) 
            nums[k++] = Left[i++];
        else 
            nums[k++] = Right[j++];
    }

    while (i < n1) {
        nums[k++] = Left[i++];
    }
    while (i < n2) {
        nums[k++] = Right[j++];
    }
}

void mergeSort(vector<int> &nums, int left, int right) {
    if (left >= right) 
        return;
    int mid = (left + right)/2;
    mergeSort(nums, left, mid);
    mergeSort(nums, mid + 1, right);
    mergeTwoSortedArrays(nums, left, mid, right);
}


int main()
{
    vector<int> arr = { 12, 11, 13, 5, 6, 7 };
    int n = arr.size();

    mergeSort(arr, 0, n - 1);

    for (auto x: arr) {
        cout << x << ' ';
    }
    return 0;
}
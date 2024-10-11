#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> mergeTwoSortedArrays(vector<int> &num1, vector<int> &num2) {
    vector<int> result;
    int i = 0, j = 0;
    while (i <  num1.size() && j <= num2.size()) {
        if (num1[i] < num2[j]) 
            result.push_back(num1[i++]);
        else 
            result.push_back(num2[j++]);
    }

    while (i < num1.size()) {
        result.push_back(num1[i++]);
    }
    while (i < num2.size()) {
        result.push_back(num2[j++]);
    }

    return result;
}



int main() {
    vector<int> num1 = {-1, 22, 144, 500, 1111, 20000};
    vector<int> num2 = {-11, 222, 1244, 5000, 11211, 20000};
    vector<int> result = mergeTwoSortedArrays(num1, num2);
    for (auto x: result) {
        cout << x << ' ';
    }
    return 0;
}

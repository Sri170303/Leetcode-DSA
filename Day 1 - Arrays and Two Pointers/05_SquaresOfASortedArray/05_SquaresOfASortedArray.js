// https://leetcode.com/problems/squares-of-a-sorted-array/

function sortedSquares(nums) {
    let n = nums.length;
    let sortedArray = new Array(n);
    let i = 0, j = n - 1, k = n - 1;
    while (i <= j) {
        if (nums[i] ** 2 > nums[j] ** 2) {
            sortedArray[k] = nums[i] ** 2;
            i++;
            k--;
        } else {
            sortedArray[k] = nums[j] ** 2;
            j--;
            k--;
        }
    }
    return sortedArray;
};

console.log(sortedSquares([-4,-1,0,3,10]));
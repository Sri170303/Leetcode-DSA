// https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/

function twoSumII(nums, target) {
    nums = nums.sort((x,y) => x-y);
    let n = nums.length - 1 ;
    let i = 0, j = n - 1;
    while (i < j) {
        if (nums[i] + nums[j] < target) {
            i++;
        } else if (nums[i] + nums[j] > target) {
            j--;
        } else {
            return [i,j];
        }
    }
}

console.log(twoSumII([2,7,11,15], 9));
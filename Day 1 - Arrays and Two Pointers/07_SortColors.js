// https://leetcode.com/problems/sort-colors/

function sortColors(nums) {
    let n = nums.length;
    let i = 0, j = 0, k = n - 1;

    while (j <= k) {
        if (nums[j] == 0) {
            [nums[i], nums[j]] = [nums[j], nums[i]];
            i++;
            j++; 
        } else if (nums[j] == 1) {
            j++;
        } else {
            [nums[j], nums[k]] = [nums[k], nums[j]];
            k--;
        }
    }

    return nums;
}


console.log(sortColors([0]));
console.log(sortColors([0, 0]));
console.log(sortColors([0, 0, 0]));

console.log(sortColors([1]));
console.log(sortColors([1, 1]));
console.log(sortColors([1, 1, 1]));

console.log(sortColors([2]));
console.log(sortColors([2, 2]));
console.log(sortColors([2, 2, 2]));

console.log(sortColors([2, 1, 0]));
console.log(sortColors([2, 0, 1]));
console.log(sortColors([0, 1, 2]));

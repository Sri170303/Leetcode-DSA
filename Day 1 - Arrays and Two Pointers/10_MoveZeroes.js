// https://leetcode.com/problems/move-zeroes/

function moveZeroes(nums) {
    let i = 0, count = 0;
    while (i < nums.length) {
        if (nums[i] == 0) {
            i++;
        } else {
            [nums[count], nums[i]] = [nums[i], nums[count]];
            i++;
            count++;

        }
    }
    
    return nums;
}

console.log(moveZeroes([0,1,0,3,12]));
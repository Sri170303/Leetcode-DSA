function bubbleSort(nums) {
    for (let i = 0; i < nums.length - 1; i++) {
        for (let j = 0; j < nums.length - i - 1; j++) {
            if (nums[j] > nums[j+1]) {
                [nums[j], nums[j+1]] = [nums[j+1], nums[j]];
            }
        }
    }
    return nums;
}

console.log(bubbleSort([-1,22,1,100,23,-11,0]));
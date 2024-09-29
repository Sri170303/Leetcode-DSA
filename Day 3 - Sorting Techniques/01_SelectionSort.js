function selectionSort(nums) {
    
    for (let i = 0; i < nums.length - 1; i++) {
        let min_idx  = i;
        for (let j = i+1; j < nums.length; j++) {
            if (nums[j] < nums[min_idx]) {
                min_idx = j;
            }
        }
        if (i != min_idx) {
            [nums[i], nums[min_idx]] = [nums[min_idx], nums[i]];
        }
    }
    return nums;
}


console.log(selectionSort([112, -22, 0, 11, 12, 100, 23, -1]));
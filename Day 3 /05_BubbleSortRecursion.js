function bubbleUp(nums, start, end = nums.length - 1, max_idx = start) {
    
    if (start >= end) {
        return max_idx;
    }
     
    if (nums[start] < nums[start + 1]) {
        max_idx = start + 1; 
    }

    return bubbleUp(nums, start + 1, end, max_idx);
}

function bubbleSortRecursive(nums, start = 0, end = nums.length - 1) {
    if (start >= end) {
        return nums;
    } else {
        let max_idx = bubbleUp(nums, start, end);
        if (nums[end] != nums[max_idx]) {
            [nums[end], nums[max_idx]] = [nums[max_idx], nums[end]];
        }

        return bubbleSortRecursive(nums, start, end - 1);
    }

}


console.log(bubbleSortRecursive([-3, -2, 1, -100000]));
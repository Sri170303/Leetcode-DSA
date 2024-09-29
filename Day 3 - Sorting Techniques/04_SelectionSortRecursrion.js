
function selectMin(nums, start, end = nums.length - 1, min_idx = start) {
    if (start >= end) {
        return min_idx;
    }
    
    if (nums[start + 1] < nums[min_idx]) {
        min_idx = start + 1;
    }
    
    return selectMin(nums, start + 1, end, min_idx);
}

function selectionSortRecursive(nums, start = 0, end = nums.length - 1) {
    
    if (start >= end) {
        return nums;
    }

    let min_idx =  selectMin(nums, start);
    if (nums[start] != nums[min_idx]) {
        [nums[start], nums[min_idx]] = [nums[min_idx], nums[start]];
    }
    
    return selectionSortRecursive(nums, start + 1, end)
}


console.log(selectionSortRecursive([100, 99, 98,97,-1]));
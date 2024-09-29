function mergeTwoSortedArrays(left, right) {
    let sortedArr = new Array();
    let i = 0, j = 0, k = 0;
    while (i < left.length && j < right.length) {
        if (left[i] <= right[j]) {
            sortedArr[k++] = left[i++];
            
        } else {
            sortedArr[k++] = right[j++];
        }
    }
    
    while (i < left.length) {
        sortedArr[k++] = left[i++];
    } 
   
    while (j < right.length) {
        sortedArr[k++] = right[j++];
    } 

    return sortedArr;
}

function mergeSort(nums, start = 0, end = nums.length - 1) {
    if (start >= end) {
        return [nums[start]];
    }
    let mid = Math.floor((start + end) / 2);
    let left_sorted = mergeSort(nums, start, mid);
    let right_sorted = mergeSort(nums, mid + 1, end);

    return mergeTwoSortedArrays(left_sorted, right_sorted);
}

console.log(mergeSort([-1, 100, 2, 32, 1, 2, 10]));
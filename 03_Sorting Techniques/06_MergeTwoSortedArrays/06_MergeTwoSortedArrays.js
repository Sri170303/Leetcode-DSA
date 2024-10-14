// https://leetcode.com/problems/merge-sorted-array/

function mergeTwoSortedArrays(nums1, m, nums2, n) {

    // here I have used extra space to hold the sorted array
    let sortedArr = new Array(m+n);
    let i = 0, j = 0, k = 0;
    while (i < m && j < n) {
        if (nums1[i] <= nums2[j]) {
            sortedArr[k++] = nums1[i++];
            
        } else {
            sortedArr[k++] = nums2[j++];
        }
    }
    
    if (i == m && j != n) {
        while (j != n) {
            sortedArr[k++] = nums2[j++];
        } 
    } else {
        while (i != m) {
            sortedArr[k++] = nums1[i++];
        } 
    }
    k = 0
    while (k < m + n) {
        nums1[k] = sortedArr[k++];
    }

    return nums1;
}


console.log(mergeTwoSortedArrays([1, 2, 3, 0, 0 ,0], 3, [2, 5, 6], 3));
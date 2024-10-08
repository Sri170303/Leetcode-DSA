// https://leetcode.com/problems/merge-sorted-array/

// No extra space used
function mergeTwoSortedArraysII(nums1, m, nums2, n) {

    let k = m + n - 1;
    let i = m - 1;
    let j = n - 1;

    while (i >= 0 && j >= 0) {
        if (nums1[i] >= nums2[j]) {
            nums1[k--] = nums1[i--];                    
            
        } else {
            nums1[k--] = nums2[j--];
        }    
    }

    while (i >= 0) {
        nums1[k--] = nums1[i--];
    }
    
    while (j >= 0) {
        nums1[k--] = nums2[j--];        
    }

    return nums1;
}

console.log(mergeTwoSortedArraysII([-1, -2, 33, 0, 0 ,0], 3, [2, 5, 6], 3));

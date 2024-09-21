// https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/

function twoSumII(nums, target) {
    let hashMap = {}; 

    for (let i = 0; i < nums.length; i++) {
        let complement = target - nums[i]; 
        
        if (complement in hashMap && hashMap[complement] !== i) {
            return [hashMap[complement] + 1, i + 1];
        }
        
        hashMap[nums[i]] = i;
    }
    
    return []; 
}

console.log(twoSumII([2,7,11,15],9));
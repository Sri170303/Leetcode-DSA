// https://leetcode.com/problems/two-sum/

function twoSum(nums, target) {
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


console.log(twoSum([2,7,11,15],9));
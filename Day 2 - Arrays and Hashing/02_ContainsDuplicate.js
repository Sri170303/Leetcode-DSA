// https://leetcode.com/problems/contains-duplicate/description/

function containsDuplicate(nums) {
    const mp = {};
    let i = 0;
    while (i < nums.length) {
        if (mp[nums[i]] == undefined) {
            mp[nums[i]] = 1;
        } else {
            mp[nums[i]]++;
        }
        i++;
    }
    i = 0;
    while (i < nums.length) {
        if (mp[nums[i]] > 1) {
            return true;
        }
        i++;
    }
    return false;
}


console.log(containsDuplicate([1,1,1,3,3,4,3,2,4,2]));
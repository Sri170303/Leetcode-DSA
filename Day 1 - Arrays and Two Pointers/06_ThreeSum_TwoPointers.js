// https://leetcode.com/problems/3sum/


function threeSum(nums) {
    nums = nums.sort((x,y) => x-y);
    let result = new Array();
    let i = 0, j = 1, k = nums.length - 1;
    while (i < nums.length - 2) {
        let target = -(nums[i]);
        while (j < k) {
            if (nums[j] + nums[k] == target) {
                result.push([nums[i], nums[j], nums[k]]);
                j++;
                while (nums[j] == nums[j-1]) {
                    j++;
                }
                k--;
                while (nums[k] == nums[k+1]) {
                    k--;
                }

            } else if (nums[j] + nums[k] < target) {
                j++;
                while (nums[j] == nums[j-1]) {
                    j++;
                }                
            } else {
                k--;
                while (nums[k] == nums[k+1]) {
                    k--;
                }
            }

        }
        i++;
        while (nums[i] == nums[i-1]) {
            i++;
        }
        j = i + 1;
        k = nums.length - 1;
    }
    return result;
}


console.log(threeSum([-1,0,1,2,-1,-4]))
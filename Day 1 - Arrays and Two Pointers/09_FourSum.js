// https://leetcode.com/problems/4sum/description/

function fourSum(nums, target) {
    nums = nums.sort((x,y) => x-y);
    let i = 0, j = 1, k = 2, l = nums.length - 1;
    let result = new Array();
    while (i < nums.length - 3) {
        // target = target - nums[i] - nums[j];
        while (j < nums.length - 2) {
            let pair_target = target - nums[i] - nums[j];
            while (k < l) {
                if (nums[k] + nums[l] == pair_target) {
                    result.push([nums[i], nums[j], nums[k], nums[l]]);
                    k++;
                    while (nums[k] == nums[k-1] && k < l) {
                        k++;
                    }
                    l--;
                    while (nums[l] == nums[l+1] && k < l) {
                        l--;
                    }
                } else if (nums[k] + nums[l] < pair_target) {
                    k++;
                    while (nums[k] == nums[k-1] && k < l) {
                        k++;
                    }
                } else {
                    l--;
                    while (nums[l] == nums[l+1] && k < l) {
                        l--;
                    }
                }
            }
            j++;
            while (nums[j] == nums[j-1] && j < nums.length - 2) {
                j++;
            }
            k = j + 1;
            l = nums.length - 1;
        }
        i++;
        while (nums[i] == nums[i-1] && i < nums.length - 3) {
            i++;
        }
        j = i + 1;
        k = j + 1;
        l = nums.length - 1;
    }

    return result;

}


console.log(fourSum([1,0,-1,0,-2,2], 0));

console.log(fourSum([-3,-2,-1,0,0,1,2,3], 0));
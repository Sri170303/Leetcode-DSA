function insertionSort(nums) {
    for (let i = 1; i < nums.length; i++) {
        let curr_element = nums[i];
        let j;
        for (j = i - 1; j >= 0; j--) {
            if (nums[j] > curr_element) {
                nums[j+1] = nums[j];
            } else {
                break;
            }
        }
        nums[j+1] = curr_element;
    }

    return nums;
}


console.log(insertionSort([-1,22,1,100,23,-11,0]));
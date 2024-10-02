// https://leetcode.com/problems/check-if-array-pairs-are-divisible-by-k/


var canArrange = function(arr, k) {
    const remainderCount = new Array(k).fill(0);

    
    for (const num of arr) {
        const remainder = ((num % k) + k) % k; 
        remainderCount[remainder]++;
    }

    
    for (let i = 1; i < k; i++) {
        if (remainderCount[i] !== remainderCount[k - i]) {
            return false;
        }
    }

    
    if (remainderCount[0] % 2 !== 0) {
        return false;
    }

    
    if (k % 2 === 0 && remainderCount[k / 2] % 2 !== 0) {
        return false;
    }

    return true;
};

console.log(canArrange([1,2,3,4,5,10,6,7,8,9], 5));
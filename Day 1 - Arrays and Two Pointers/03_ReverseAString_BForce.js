// https://leetcode.com/problems/reverse-string/description/

function reverseString(s) {
    // let reversed_s = new Array(s.length);
    let reversed_s = new Array();
    let n = s.length;
    // let i = 0, j = n - 1;
    let i = 0;
    while (i < n) {
        // reversed_s[j] = reversed_s[i];
        reversed_s.push(s[i]);
        i++;
        // j--;
    }
    return reversed_s;
}

console.log(reverseString(["h","e","l","l","o"]));
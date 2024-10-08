// https://leetcode.com/problems/reverse-string/description/

function reverseString(s) {
    let reversed_s = new Array(s.length);
    let n = s.length;
    let i = 0, j = n - 1;
    while (i < n) {
        reversed_s[j] = s[i];
        i++;
        j--;
    }
    return reversed_s;
}

console.log(reverseString(["h","e","l","l","o"]));
// https://leetcode.com/problems/reverse-string/description/

function reverseString(s) {
    let n = s.length;
    let i = 0, j = n - 1;
    while (i < j) {
        let temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        i++;
        j--;
    }
    return s;
}

console.log(reverseString(["h","e","l","l","o"]));
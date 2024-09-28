// https://leetcode.com/problems/first-unique-character-in-a-string/

function firstUniCharInString(s) {
    let mp = {}
    for (let i = 0; i < s.length; i++) {
        if (mp[s[i]] == undefined) {
            mp[s[i]] = 1;
        } else {
            mp[s[i]] += 1;
        }
    }
    for (let i = 0; i < s.length; i++) {
        if (mp[s[i]] == 1) {
            return i;
        }
    }
    return -1;
}

console.log(firstUniCharInString("leetcode"));
// https://leetcode.com/problems/valid-anagram/

function validAnagram(s, t) {
    const mp = {};
    if (s.length != t.length) {
        return false;
    }
    // prepare a frequency map for s
    for (let i = 0; i < s.length; i++) {
        if (mp[s[i]] == undefined) {
            mp[s[i]] = 1;
        } else {
            mp[s[i]]++;
        }

    }
    // check elements of t in frequency map for s
    for (let i = 0; i < t.length; i++) {
        if (mp[t[i]] == undefined) {
            return false;
        } else {
            mp[t[i]] -= 1;
            if (mp[t[i]] == 0) {
                delete mp[t[i]];
            }
        }
    }

    return Object.keys(mp).length == 0;
}

console.log(validAnagram("anagram", "nagaram"));

console.log(validAnagram("race", "trace"));

console.log(validAnagram("race", "care"));
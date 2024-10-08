// https://leetcode.com/problems/reverse-words-in-a-string/

function reverseWordsInAString(s) {
    let i = 0, j = 0;
    let words_list = new Array();

    s = s.trim();
    while (j < s.length) {
        while (s[j] == ' ' && j < s.length) {
            j++;
        }
        i = j;
        while (s[j] != ' ' && j < s.length) {
            j++;
        }
        let word = s.substring(i,j);
        words_list.push(word);
    }
    
    words_list = words_list.reverse();
    let result = words_list.join(' ');
    return result;
}

// if the question does not have multiple spaces in between words
function check(s) {
    return s.split(' ').reverse().join(' ').trim();
}

console.log(reverseWordsInAString(" How are you   "));
console.log(check(" How are you   "));

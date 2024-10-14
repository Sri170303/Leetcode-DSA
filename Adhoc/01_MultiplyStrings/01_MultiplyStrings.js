// https://leetcode.com/problems/multiply-strings/description/

var multiply = function(num1, num2) {
    
    if (num1 === "0" || num2 === "0") return "0";

    let result = Array(num1.length + num2.length).fill(0); 
    
    for (let i = num1.length - 1; i >= 0; i--) {
        for (let j = num2.length - 1; j >= 0; j--) {
            
            const product = (num1[i]) * (num2[j]);
            const sum = product + result[i + j + 1]; 
            result[i + j + 1] = sum % 10;
            result[i + j] += Math.floor(sum / 10); 
        }
    }
    
    
    return result.join('').replace(/^0+/, '');
};


console.log(multiply("93553535314","25247452591474"));
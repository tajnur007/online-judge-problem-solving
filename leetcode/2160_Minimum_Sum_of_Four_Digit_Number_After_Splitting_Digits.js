/**
 * @param {number} num
 * @return {number}
 */
var minimumSum = function(num) {
    let numStr = num.toString().split('').sort().join('');
    let sums = [];
    sums.push(parseInt(numStr.substring(0, 3)) + parseInt(numStr.substring(3)));
    sums.push(parseInt(numStr[0] + numStr[2]) + parseInt(numStr[1] + numStr[3]));

    return Math.min(...sums);
};

/**
 * @param {number[]} nums
 * @return {number[]}
 */
var numberOfPairs = function(nums) {
    let cnt = [], uniqueNums = [];

    nums.forEach(num => {
        if(cnt[num]) {
            cnt[num]++;
        } else {
            cnt[num] = 1;
            uniqueNums.push(num);
        }
    });

    let pairs = 0, rem = 0;

    uniqueNums.forEach(num => {
        if(cnt[num] % 2) {
            pairs = pairs + (--cnt[num] / 2);
            rem++;
        } else {
            pairs = pairs + (cnt[num] / 2);
        }
    });

    return [pairs, rem];
};

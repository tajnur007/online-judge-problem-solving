
# JavaScript Solution

```JS
/**
 * @param {number} n
 * @return {string[]}
 */
var fizzBuzz = function(n) {
    let answer = [];

    while(n) {
        if(!(n % 15)) {
            answer.unshift('FizzBuzz');
        } else if(!(n % 3)) {
            answer.unshift('Fizz');
        } else if(!(n % 5)) {
            answer.unshift('Buzz');
        } else {
            answer.unshift('' + n);
        }

        n--;
    }

    return answer;
};
```




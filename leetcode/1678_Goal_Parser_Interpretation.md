
# Approach 1: Simple Process

```JS
/**
 * @param {string} command
 * @return {string}
 */
var interpret = function(command) {
    return command.replaceAll('()', 'o').replaceAll('(al)', 'al');
};
```

# Approach 2: Faster Than Before

```JS
/**
 * @param {string} command
 * @return {string}
 */
var interpret = function(command) {
    let ans = '';

    for(let i = 0; i < command.length; i++) {
        if(command[i] == '(') {
            if(command[i + 1] == ')') {
                ans += 'o';
                i++;
            } else {
                ans += 'al';
                i += 3;
            }
        } else {
            ans += 'G';
        }
    }

    return ans;
};
```




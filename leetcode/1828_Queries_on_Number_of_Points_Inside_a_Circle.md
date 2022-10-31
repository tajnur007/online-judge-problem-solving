
# JavaScript Solution 

```JS
/**
 * @param {number[][]} points
 * @param {number[][]} queries
 * @return {number[]}
 */
var getDistanceSq = function(x1, y1, x2, y2) {
    const diffX = x2 - x1;
    const diffY = y2 - y1;

    return (diffX**2) + (diffY**2);
}

var countPoints = function(points, queries) {
    let ans = [];

    for(const query of queries) {
        let cnt = 0;
        for(const point of points) {
            if(query[2]**2 >= getDistanceSq(query[0], query[1], point[0], point[1]))
                cnt++;
        }
        ans.push(cnt);
    }

    return ans;
};
```





# JavaScript Solution

```JS
let urlStore = {};
let reverseUrlStore = {};
const characters ='ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789';

/**
 * Encodes a URL to a shortened URL.
 *
 * @param {string} longUrl
 * @return {string}
 */
var encode = function(longUrl) {
    let uniqueKey = '';
    let tinyUrl = 'https://tinyurl.com/';

    // Checking the url is already stored or not
    if(reverseUrlStore[longUrl]) {
        uniqueKey = reverseUrlStore[longUrl];
        tinyUrl += uniqueKey;
    } else {
        // Generating a uniqueKey for new url
        while(true) {
            for(let i = 0; i < 15; i++) {
                uniqueKey += characters.charAt(Math.floor(Math.random() * characters.length));
            }

            if(!urlStore[uniqueKey]) {
                urlStore[uniqueKey] = longUrl;
                reverseUrlStore[longUrl] = uniqueKey;
                tinyUrl += uniqueKey;
                break;
            }
        }
    }

    return tinyUrl;
};

/**
 * Decodes a shortened URL to its original URL.
 *
 * @param {string} shortUrl
 * @return {string}
 */
var decode = function(shortUrl) {
    let parts = shortUrl.split('/');
    let key = parts[parts.length - 1];

    return urlStore[key];
};

console.log(encode('https://leetcode.com/problems/design-tinyurl'));

/**
 * Your functions will be called as such:
 * decode(encode(url));
 */
```






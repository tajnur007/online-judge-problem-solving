

# Bruteforce Approach
- Time complexity: O(n^2)
```
class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        short ans = 0;
        short len = nums.size();

        for(short i = 0; i < len; i++) {
            for(short j = i + 1; j < len; j++) {
                if(abs(nums[j] - nums[i]) == k)
                    ans++;
            }
        }

        return ans;
    }
};
```

# Sliding Window Approach
- Time complexity: O(nlogn)
```
class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        short ans = 0, j = 0, len = nums.size();

        sort(begin(nums), end(nums));

        for(short i = 0; i < len; ) {
            short num = nums[i], cnt = 0;

            //Count similar numbers
            while((i < len) && (nums[i] == num)) i++, cnt++;

            //Move index to the first ||nums[i] - nums[j]| == k element
            short cmp = num + k;
            while((j < len) && (nums[j] < cmp)) j++;

            //Count similar numbers
            short start = j;
            while((j < len) && (nums[j] == cmp)) j++;

            ans += (cnt * (j - start));
        }

        return ans;
    }
};
```

# Frequency Count Approach
- Time complexity: O(n)
```
class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        short ans = 0, cnt[101] = {};

        for(auto& num : nums) {
            if(num - k > 0) ans += cnt[num - k];
            if(num + k < 101) ans += cnt[num + k];
            cnt[num]++;
        }

        return ans;
    }
};
```

class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int ans = 0;
        
        for(short i = 0; i < arr.size(); i++) {
            int sum = arr[i];
            ans += arr[i];
            for(short j = i + 1; j < arr.size(); j++) {
                sum += arr[j];
                if(!((j - i) & 1))
                    ans += sum;
            }
        }

        return ans;
    }
};

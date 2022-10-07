class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        sort(begin(seats), end(seats));
        sort(begin(students), end(students));

        int len = seats.size(), ans = 0;

        for(int i = 0; i < len; i++) {
            ans += abs(seats[i] - students[i]);
        }

        return ans;
    }
};

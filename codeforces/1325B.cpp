#include<bits/stdc++.h>
#define FasterIO ios_base::sync_with_stdio(false);cin.tie(NULL)
#define FileIO freopen("in.txt","r",stdin);freopen("out.txt","w",stdout)
#define cinIg cin.sync();cin.get()
#define PI 2*acos(0.0)
#define NL <<"\n"
#define INF 0x3f3f3f3f

using namespace std;
typedef unsigned long long ll;
typedef vector<int> Row;
typedef vector<Row> Matrix;


int main()
{
    FasterIO;
    //FileIO;

    int tc;
    cin >> tc;
    while(tc--) {
        int n, temp;
        cin >> n;
        vector <int> arr;
        vector <int>::iterator it;
        for(int i=0; i<n; i++) {
            cin >> temp;
            arr.push_back(temp);
        }
        sort(arr.begin(), arr.end());
        it  = unique(arr.begin(), arr.end());
        arr.resize(distance(arr.begin(), it));

        int result = arr.size();

        cout << result NL;
    }

    return 0;
}


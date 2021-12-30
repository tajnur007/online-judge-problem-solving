#include<bits/stdc++.h>
#define FasterIO ios_base::sync_with_stdio(false);cin.tie(NULL)
#define cinIg cin.sync();cin.get()
#define nl <<"\n"
#define pb push_back
#define pi acos(-1)
#define f first
#define s second
#define t third

using namespace std;
typedef long long ll;

int main()
{
    FasterIO;

    ll tc;
    cin >> tc;
    while(tc--) {
        ll n, temp, result=0;
        cin >> n;
        temp = n;
        while(temp--) {
            ll a;
            cin >> a;
            result += a;
        }
        result = ceil((double)result/(double)n);
        cout << result nl;
    }


    return 0;
}


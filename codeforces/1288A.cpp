#include<bits/stdc++.h>
#define FasterIO ios_base::sync_with_stdio(false);cin.tie(NULL)
#define FileIO freopen("in.txt","r",stdin);freopen("out.txt","w",stdout)
#define cinIg cin.sync();cin.get()
#define PI 2*acos(0.0)
#define NL <<"\n"

using namespace std;
typedef unsigned long long ll;

int main()
{
    FasterIO;
    //FileIO;

    int tc;
    cin >> tc;

    while(tc--) {
        ll n, d;
        cin >> n >> d;
        bool flag = false;

        if(d<=n) {
            flag = true;
        }
        else{
            for(ll x=1; x<n; x++) {
                ll ceilValue = ceil((double)d/(double)(x+1));
                if((x+ceilValue) <= n){
                    flag = true;
                    break;
                }
            }
        }

        if(flag) {
            cout << "YES" NL;
        }
        else {
            cout << "NO" NL;
        }
    }

    return 0;
}




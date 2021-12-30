#include<bits/stdc++.h>
#define FasterIO ios_base::sync_with_stdio(false);cin.tie(NULL)
#define cinIg cin.sync();cin.get()
#define nl <<"\n"
#define pb push_back
#define pf push_front
#define pi acos(-1)
#define f first
#define s second
#define t third

using namespace std;
typedef long long ll;

int main()
{
    FasterIO;

    ll n, k;
    cin >> n >> k;
    list<ll> lst;
    while(n--) {
        ll x;
        cin >> x;
        if(find(lst.begin(),lst.end(),x) == lst.end()) {
            lst.pf(x);
            if(lst.size()>k)
                lst.pop_back();
        }
    }
    cout << lst.size() nl;
    for(auto l : lst)
        cout << l << " ";
    cout nl;


    return 0;
}



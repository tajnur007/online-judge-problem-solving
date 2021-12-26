#include <bits/stdc++.h>
#include <stdio.h>
#define FasterIO        ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define FileIO          freopen("in.txt","r",stdin);freopen("out.txt","w",stdout)
#define cinIg           cin.sync();cin.get()
#define PI              2*acos(0.0)
#define NL              <<"\n"
#define MOD             1000000007
#define INF             0x3f3f3f3f
#define loop(n)         for(int i = 0; i < n; i++)
#define loop1(n)        for(int i = 1; i <= n; i++)
#define fi              first
#define se              second
#define pb              push_back
#define mp		        make_pair
#define all(x)          (x).begin(),(x).end()
#define allr(x)         (x).rbegin(),(x).rend()
#define pi              pair<int,int>
#define gcd(a, b)       __gcd(a,b)
#define lcm(a, b)       ((a)*(b)/gcd(a,b))
#define db(x)           cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y)        cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
#define mem(a,b)        memset(a,b,sizeof a)

using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef vector<int> Row;
typedef vector< Row > Matrix;
const ll N=8e6+7, inf=1e11, mod=1e9+7, eps=-1e8;

bool isPrime( ll val ) { if( val == 2 ) return true ; if( val % 2 == 0 || val == 1 ) return false ; ll sqrt_N = (ll) ( ( double ) sqrt( val ) ) ; for( ll i = 3 ; i <= sqrt_N ; i += 2 ) { if( val % i == 0 ) return false ; } return true ; }
int toInt(string s)  { int sm; stringstream ss(s); ss>>sm; return sm; }
template<class T> string toString(T _input) { stringstream blah; blah << _input; return blah.str(); }


///................Graph's Move.................
///const int dx[] = {+1,-1,+0,+0}; ///Rock's Move
///const int dy[] = {+0,+0,+1,-1}; ///Rock's Move
///const int dx[] = {+0,+0,+1,-1,-1,+1,-1,+1}; ///King's Move
///const int dy[] = {-1,+1,+0,+0,+1,+1,-1,-1}; ///king's Move
///const int dx[] = {-2,-2,-1,-1,+1,+1,+2,+2}; ///knight's Move
///const int dy[] = {-1,+1,-2,+2,-2,+2,-1,+1}; ///knight's Move
///*.....................-_-........................*///


int n = 7368788;
vector<bool> prime(n+1, true);





int main()
{
    FasterIO;
    //FileIO;


for(int p=2; p*p <= n; p++)
	if(prime[p]==true)
		for(int i=p*p; i<=n; i+=p)
			prime[i]=false;

    int tc;
    cin >> tc;

    loop1(tc) {
        int n;
        cin >> n;

        Row vec;
        for(int j=1; j<n; j++)
            vec.pb(1);

        int sum = n - 1;
        int it = n, last;

        for(; ; it++) {
            if(prime[it] && !prime[it-sum]) {
                last = it - sum;
                break;
            }
        }

        vec.pb(last);


        for(int j=0; j<n; j++) {
            int k=0, l=j;
            for(; k<n-1; k++, l++) {
                cout << vec[l] << " ";
            }
            cout << vec[l] NL;

            vec.pb(vec[j]);
        }
    }




    return 0;
}


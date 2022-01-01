#include<bits/stdc++.h>
#define FasterIO ios_base::sync_with_stdio(false);cin.tie(NULL)
#define cinIg cin.sync();cin.get()
#define nl <<"\n"

using namespace std;
typedef long long ll;

int main()
{
    FasterIO;

    int testCase;
    cin >> testCase;
    while(testCase--) {
        string mainStr;
        bool check = false;
        cin >> mainStr;
        ll strLen = mainStr.size() - 1;
        for(ll i=0; i<=strLen; i++) {
            if(mainStr[i]!='?' && i!=strLen) {
                if(mainStr[i]==mainStr[i+1])
                    check = true;
            }

            if(i==0 && mainStr[i]=='?') {
                if(mainStr[i+1] == 'a' || mainStr[i+1] == 'c' || mainStr[i+1] == '?')
                    mainStr[i] = 'b';
                else mainStr[i] = 'a';
            }
            else if(i==strLen && mainStr[i]=='?') {
                if(mainStr[i-1] == 'a' || mainStr[i+1] == 'c')
                    mainStr[i] = 'b';
                else mainStr[i] = 'a';
            }
            else if(mainStr[i]=='?') {
                if(mainStr[i-1]=='a' && mainStr[i+1]=='?')
                    mainStr[i] = 'b';
                else if(mainStr[i-1]=='a' && mainStr[i+1]=='a')
                    mainStr[i] = 'b';
                else if(mainStr[i-1]=='a' && mainStr[i+1]=='b')
                    mainStr[i] = 'c';
                else if(mainStr[i-1]=='a' && mainStr[i+1]=='c')
                    mainStr[i] = 'b';
                else if(mainStr[i-1]=='b' && mainStr[i+1]=='?')
                    mainStr[i] = 'a';
                else if(mainStr[i-1]=='b' && mainStr[i+1]=='a')
                    mainStr[i] = 'c';
                else if(mainStr[i-1]=='b' && mainStr[i+1]=='b')
                    mainStr[i] = 'a';
                else if(mainStr[i-1]=='b' && mainStr[i+1]=='c')
                    mainStr[i] = 'a';
                else if(mainStr[i-1]=='c' && mainStr[i+1]=='?')
                    mainStr[i] = 'b';
                else if(mainStr[i-1]=='c' && mainStr[i+1]=='a')
                    mainStr[i] = 'b';
                else if(mainStr[i-1]=='c' && mainStr[i+1]=='b')
                    mainStr[i] = 'a';
                else if(mainStr[i-1]=='c' && mainStr[i+1]=='c')
                    mainStr[i] = 'b';
            }
        }
        if(check) {
            cout << "-1" nl;
        }
        else {
            cout << mainStr nl;
        }
    }

    return 0;
}



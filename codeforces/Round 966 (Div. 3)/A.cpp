#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define pii pair<int, int>
#define pll pair<ll, ll>
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
#define rep(i, a, b) for (int i = a; i < b; ++i)

void solve() {
    int a;
    cin >> a;
    string s= std::to_string(a);
    if((s.length()>=3) && (s.length()<=5) && (s.substr(0, 2)== "10")){
        if(s.length()==3){
            if(s[2]<'2'){
                cout << "NO" << endl;
                return;
            }
        }else{
            if(s[2]=='0'){
                cout << "NO" << endl;
                return;
            }
        }
    }else{
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
}

int main() {
    fastio;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

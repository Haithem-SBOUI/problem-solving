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

int calc(int c1, int c2){
    if(c1>c2)
        return 1;
    else if(c1<c2)
        return -1;
    return 0;
}
void solve() {
    int a;
    int b;
    int c;
    int d;
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
    int res=0;
    if(calc(a, c)+calc(b, d)>0)
        res++;
    if(calc(a, d)+calc(b, c)>0)
        res++;
    if(calc(b, d)+calc(a, c)>0)
        res++;
    if(calc(b, c)+calc(a, d)>0)
        res++;
    cout << res << endl;
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

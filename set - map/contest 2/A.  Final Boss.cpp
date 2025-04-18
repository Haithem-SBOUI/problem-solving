#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
typedef long long ll;
const int N = 3e5 + 7;

int h, n;
int a[N], c[N];

void test_case() {
    cin >> h >> n;
    set<pair<ll, int>> st;
    for (int i = 0 ; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0 ; i < n; i++) {
        cin >> c[i];
        st.insert({1 , i});
    }
    pair<ll, int> p;
    ll ans = 0;
    while(h  > 0) {
        p = *st.begin();
        st.erase(*st.begin());
        h-=a[p.second];
        ans = p.first;
        st.insert({p.first + c[p.second], p.second});
    }
    cout << ans << endl;
}

int main() {
    fastio;
    int T=1;
    cin >> T;
    while (T--) {
        test_case();
    }
    return 0;
}
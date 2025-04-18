#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
typedef long long ll;
const int N = 3e5 + 7;

int n, a[N];

void test_case() {
    cin >> n;
    for (int i = 0 ; i < n ; i++) {
        cin >> a[i];
    }
    ll h = 0;
    multiset<int> st;
    int ans = 0;
    for (int i = 0 ; i < n ; i++) {
        if (h + a[i] >= 0) {
            ans++;
            h += a[i];
            st.insert(a[i]);
        } else {
            h += a[i];
            st.insert(a[i]);
            h -= *st.begin();
            st.erase(st.begin());
        }
    }
    cout << ans << endl;
}

int main() {
    fastio;
    int T=1;
    // cin >> T;
    while (T--) {
        test_case();
    }
    return 0;
}
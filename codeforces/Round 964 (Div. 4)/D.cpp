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

bool isSub(string &s, string &t){
    int pt=0;
    for(int i=0;i<s.length();i++){
        if(s[i]==t[pt]){
            pt++;
        }else if(s[i]=='?'){
            return true;
        }
    }
    if(pt==t.length())
        return true;
    else
        return false;
}

void solve() {
    string s;
    string t;
    cin>>s;
    cin>>t;
    if(isSub(s,t)){
        cout<<"YES"<<endl;
        cout<<s<<endl;
    }
    int n=s.length();
    int sl=0;
    int sr=n-1;
    int tl=0;
    int tr=t.length()-1;
    while((sl<sr)&&!((s[sl]=='?') && (s[sr]=='?'))){
        if(s[sl]==t[tl]){
            tl++;
        }
        if(s[sl]!='?'){
            sl++;
        }
        if(s[sr]==t[tr]){
            tr--;
        }
        if(s[sr]!='?'){
            sr--;
        }
    }
    for(int i=sl;i<=sr;i++){
        if(s[i]=='?'){
            s[i]=t[tl];
            if(tl<tr){
                tl++;
            }
        }
    }
    if(isSub(s,t)){
        cout<<"YES"<<endl;
        cout<<s<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}

int main() {
    fastio;
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}

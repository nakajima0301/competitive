#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
#define REP(i,a,b) for(int i=a;i<b;i++)
using namespace std;

void solve()
{
    string s,t;
    cin >> s >> t;
    int c = 0;
    for(int i = 0; i < s.length(); i++) {
        if (s[i] != t[i]) c++;
    }

    cout << c << endl;
}

int main(){cin.tie(0);ios_base::sync_with_stdio(false);solve();return 0;}
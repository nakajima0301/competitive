#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
#define REP(i,a,b) for(int i=a;i<b;i++)
using namespace std;

void solve()
{
    int a;
    cin >> a;
    cout << a + pow(a,2) + pow(a,3) << endl;
}

int main(){cin.tie(0);ios_base::sync_with_stdio(false);solve();return 0;}
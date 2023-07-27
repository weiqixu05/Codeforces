#include <bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(int i=a;i<b;i++)

void solve(){
    int n;
    cin >> n;
    int prev=0;
    int ans;
    FOR(i,0,n){
        int j,k;
        cin >> j >> k;
        if(j>10){
            k=0;
        }
        if(k>=prev){
            ans=i+1;
            prev=k;
        }
    }
    cout << ans << "\n";
}

int main() {
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,k;
    cin >> n >> k;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    sort(a,a+n);
    int ans=0;
    for(int i=0;i<n-1;i++){
        if(a[i+1]-a[i]>k){
            ans=n-i;
            break;
        }
    }
    for(int i=n-1;i>0;i--){
        if(a[i]-a[i-1]>k){
            if(i<ans){
                ans=i;
                break;
            }
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

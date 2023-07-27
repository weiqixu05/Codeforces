#include <bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(int i=a;i<b;i++)

int main() {
    int n;
    cin >> n;
    FOR(i,0,n){
        int a[3];
        cin >> a[0]>>a[1]>>a[2];
        sort(a,a+3);
        (a[2]+a[1]>=10)?cout<<"yes\n":cout<<"no\n";
    }
}

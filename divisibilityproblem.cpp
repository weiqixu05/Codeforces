#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define pb push_back
#define FOR(i,a,b) for(int i = a; i<b; i++)
#define pob pop_back
#define vi vector<int>
#define vs vector<string>
#define vll vector<long long int>
#define vc vector<char>
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
int main() {
	ios::sync_with_stdio(0);
	//freopen("file.in", "r", stdin);
	//freopen("file.out", "w", stdout);
	int t;
	cin >> t;
	while (t--) {
		int a,b;
		cin >> a >> b;
		if(a%b!=0) {
			b=(a/b+1)*b;
			int c = a-b;
			cout << abs(c) << "\n";
			}
		else {cout << 0 << "\n";}
	}
}


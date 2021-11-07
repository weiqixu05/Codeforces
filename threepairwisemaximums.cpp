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
		int a[3];
		FOR(i,0,3) {
			cin >> a[i];
			}
		sort(a,a+3);
		if(a[1]!=a[2]) {
			cout << "NO\n";
			}
		else {
			cout << "YES \n" << a[0] << " " << a[0] << " " << a[2] << "\n";
			}
		}
	}

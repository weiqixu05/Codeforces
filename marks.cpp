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
	int n,m;
	cin >> n >> m;
	set<int>s;
	int a[n][m];
	FOR(i,0,n) {
		string str;
		cin >> str;
		FOR(j,0,m) {
			a[i][j] = str[j]-'0';
			}
		}
	for(int i = 0; i < m; i++) {
		vi max = {0};
			FOR(j,0,n) {
			if(a[j][i]>max[0]) {
				max.clear();
				max.pb(a[j][i]);
				max.pb(j);
				}
			else if(a[j][i]==max[0]) {
				max.pb(j);
				}
			}
			for(int k = 1; k < sz(max); k++) {
				s.insert(max[k]);
				}
			}
		
	cout << s.size();
	}


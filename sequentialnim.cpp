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
		int n;
		cin >> n;
		int a[n];
		int one = 0;
		int tally = -1;
		FOR(i,0,n) {
			cin >> a[i];
			if(a[i]==1) {
				one++;
				}
			else if(tally==-1&&a[i]>1) {
				tally=i;
				}
			}
		if(one==n) {
			n%2==0?cout << "Second" : cout << "First";
			}
		else {
			tally%2==0? cout << "First": cout << "Second";
			}
		cout << "\n";
		}
	}

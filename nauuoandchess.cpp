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
	int n;
	cin >> n;
	int l;
	l = n/2+1; cout << n/2+1 << "\n";
	FOR(i,0,n) {
		if(i%2==0) {
			cout << (i+1) << " " << 1 << "\n";
			}	
		else {cout << (i) << " " << l << "\n";}
		}
	}

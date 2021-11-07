#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define pb push_back
#define FOR(i,a,b) for(int i = a; i<b; i++)
#define pob pop_back
int main() {
	ios::sync_with_stdio(0);
	int n;
	cin >> n;
	int sum = 0;
	for(int i = 0; i < n; i++) {
		string s;
		cin >> s;
		if(s[0]=='T') {
			sum+=4;
			}
		else if(s[0]=='C') {
			sum+=6;
			}
		else if(s[0]=='O') {
			sum+=8;
			}
		else if(s[0]=='D') {
			sum+=12;
			}
		else if(s[0]=='I') {
			sum+=20;
			}
		}
	cout << sum;
	}


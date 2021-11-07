#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long 
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	string s;
	cin >> s;
	ll b = 0, sa=0,c=0;
	for (int i = 0; i < s.size(); i++) {
		if(s[i]=='B') {
			b++;
			}
		else if(s[i]=='S') {
			sa++;
			}
		else {c++;}
		}
	
	}

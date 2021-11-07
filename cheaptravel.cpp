#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, m, a, b;
	cin >>n>>m>>a>>b;
	if(a*m<=b) {
		cout << a*n;
		}
	else {if(n%m==0&&n/m*b<((n/m)*b)+((n%m)*a)) {
		cout << n/m*b;
		}
		else if(n/m*b+b<((n/m)*b)+((n%m)*a)) {
			cout << n/m*b+b;
			}
			else {cout << ((n/m)*b)+((n%m)*a);}
		}
	}


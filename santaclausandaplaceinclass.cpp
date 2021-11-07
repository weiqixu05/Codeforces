#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, m, k;
	cin >> n >> m >> k;
	int t=k;
	int sum = 0;
	k%2==0?sum=k/2:sum=k/2+1;
	if(sum%m>0) {
		cout << (sum/m)+1 << " ";
		}
	else {cout << (sum/m) << " ";}
	sum%m>0?cout << sum%m << " ":cout << m << " ";
	string s;
		if(t%2==1) {
		s = "L";
		}
	else {s="R";}	
	cout << s;
	}

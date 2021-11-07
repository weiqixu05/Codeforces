#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n,x,y;
	cin >> n >> x >> y;
	string s;
	cin >> s;
	char str[x+1];
	for (int i = 0; i < x+1; i++) {
		str[i] = '0';
		}
	str[0] = '1';
	str[x-y] = '1';
	int j = x+1;
	int sum = 0;
	int l = x;
	while (l--) {
		if(s[n-1]!=str[j-1]) {
			sum++;
			}
		j--;
		n--;
		}

	cout << sum;
	}

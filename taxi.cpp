#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	int a[n];
	int s[4] = {0};
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		s[a[i] - 1]++;
		}
	int sum = 0;
	sum += s[3];
	while (s[2] > 0 && s[0] > 0) {
		sum++;
		s[2]--;
		s[0]--;
		}
	sum += s[2];
	while (s[0] > 1 && s[1] > 0) {
		sum++;
		s[0] -= 2;
		s[1]--;
		}
	while (s[1] > 1) {
		sum++;
		s[1] -= 2;
		}
	if ((s[1] + s[0]) % 4 != 0 && s[1] + s[0] > 4) {
		sum+=((s[1] + s[0]) / 4) + 1;
		}
	else if((s[1] + s[0]) % 4 != 0 && s[1] + s[0] < 4) {
		sum++;
		}
	else {sum+=(s[1]+s[0])/4;}
	cout << sum;
	}

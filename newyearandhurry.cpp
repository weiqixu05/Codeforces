#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, k;
	cin >> n >> k;
	int time = 240-k;
	int tally = 1;
	int sum = 0;
	while (time > 0) {
		time-=tally*5;
		if(time < 0) {
			break;
			}
		tally++;
		sum++;
		}
	sum >= n ? cout << n : cout << sum;
	}

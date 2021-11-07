#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	int max = 0;
	int tally = 0;
	while (n>0) {
		if (n%2==1) {
			tally++;
			}
		else {tally = 0;}
		if(max < tally) {
			max = tally;
			}
		n /=2;
		}
	cout << max;
	}

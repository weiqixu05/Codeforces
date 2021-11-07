#include <bits/stdc++.h>
using namespace std;
int main() {
	string s;
	cin >> s;
	int n = s.size();
	bool yes = true;
	int total = 0;
	while(yes&&n!=1) {
		total++;
		int sum = 0;
		for (int i = 0; i < s.size(); i++) {
			sum += s[i] - '0';
			}
		s = to_string(sum);
		if (sum < 10) {
			yes = false;
			break;
			}
		}
		cout << total;
	}

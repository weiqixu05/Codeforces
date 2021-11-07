#include <bits/stdc++.h>
using namespace std;
int main() {
	string s;
	cin >> s;
	string hello = "hello";
	int tally = 0;
	int sum = 0;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == hello[tally]&&tally<4) {
			sum++;
			tally++;
			}
		else if(s[i] == hello[tally]&&tally==4) {
			sum++;
			break;
			}
		}
		sum == 5 ? cout << "YES" : cout << "NO";
	}

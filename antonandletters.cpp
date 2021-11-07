#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	string s;
	getline(cin, s);
	if (s.size() < 3) {
			cout << 0;
			}
	else {
	int n = s.size()/3;
	int sum = n;
	string ar[n];
	int x = 0;
	for (int i = 1; i < s.size(); i+=3) {
		ar[x] = s[i];
		x++;
		}
	sort(ar, ar + n);
	for (int i = 1; i < n; i++) {
		if (ar[i] == ar[i - 1]) {
			sum--;
			}
		}
		cout << sum;
		}
	}

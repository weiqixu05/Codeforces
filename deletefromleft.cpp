#include <bits/stdc++.h>
using namespace std;
int main() {
	string a, b;
	cin >> a >> b;
	if (a.size() > b.size()) {
		a=b;
		b=a;
		}
	vector<char>x, y;
	for (int i = 0; i < a.size(); i++) {
		a[i] == x[i];
		}
	for (int i = 0; i < b.size(); i++) {
		b[i] == y[i];
		}
	for (int i = 0; i < a.size(); i++) {
		for (int j = 0; j < b.size(); j++) {
			if (a[i] == b[j]) {
				x.erase(a.begin()+i);
				y.erase(b.begin()+j);
				break;
				}
			}
		}
	}

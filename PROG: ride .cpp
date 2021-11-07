#include <bits/stdc++.h>

using namespace std;


int main() {
	string a, b;
	int suma = 1;
	int sumb = 1;
	cin >> a >> b;
	int a1 = a.size();
	int a2 = b.size();
	for (int i = 0; i < a1; i++) {
		suma *= a[i] - 64;
		}
	for (int i = 0; i < a2; i++) {
		sumb *= b[i] - 64;
		}
		if (suma%47 == sumb%47) {
			cout << "GO";
			}
		else if (suma % 47 != sumb % 47){cout << "STAY";}
		cout << suma << "\n";
		cout << sumb;
	}

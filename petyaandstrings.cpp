#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;
int main () {
	string a;
	string b;
	cin >> a >> b;
	int sum = 0;
	int n = a.size();
	for (int i = 0; i < n; i++) {
		
		if (a[i] < 92) {
			a[i] += 32;
			}
			if (b[i] < 92) {
			b[i] += 32;
			}
		if (a[i] == b[i]) {
			sum += 0;
			}
		else if (a[i] < b[i]) {
			sum--; break;
			}
		else if (a[i] > b[i]){sum++; break;}
		
		}
		cout << sum;
	}

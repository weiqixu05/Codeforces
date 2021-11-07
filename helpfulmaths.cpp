#include <iostream>
#include <algorithm>
using namespace std;
int main () {
	string s;
	cin >> s;
	int n = (s.size()/2) + 1;
	int ar[n];
	int x = 0;
	for (int i = 0; i < s.size(); i+=2) {
		ar[x] = s[i] - '0';
		x++;
		}
		sort(ar, ar+n);
		for (int i = 0; i < n; i++) {
			if (i != n - 1) {
				cout << ar[i] << "+";
				}
			else {cout << ar[i];}
			}
	
	}

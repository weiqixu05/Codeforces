#include <bits/stdc++.h>
using namespace std;
int main() {
	
	int n;
	map<int, int>laptop;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		laptop.insert(pair<int, int>(a, b));
		}
	map<int, int>::iterator it;
	int tally = 0;
	int g = 0;
	int j = 0;
	for (it = laptop.begin(); it != laptop.end(); it++) {
		if(it->first > g && it->second < j) {
		tally++;
		break;
		}
			}	tally > 0 ? cout << "Happy Alex" : cout << "Poor Alex";
		}
	
	

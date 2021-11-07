#include <iostream>
using namespace std;
int main() {
	int n;
	int sum = 0;
	string x;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x;
		if (x == "X--" || x == "--X") {
			sum--;
			}
		else {
			sum++;
			}
		}
		cout << sum;
	}

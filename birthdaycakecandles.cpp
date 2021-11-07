#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int n;
	cin >> n;
	int a[n];
	int sum = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		}
	sort(a, a + n);
	for (int i = n - 1; i > -1; i--) {
		if (a[i] == a[n - 1]) {
			sum += 1;
			}
		}
	cout << sum;
	}

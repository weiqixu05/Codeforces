#include <iostream>
#include <vector>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<int>a;
		int power = 1;
		while (n > 0) {
			if (n%10 > 0) {
				a.push_back((n%10) * power);
				}
			power *= 10;
			n/=10;
			}
		cout << a.size() << "\n";
		for (int i = 0; i < a.size(); i++) {
			cout << a[i] << " ";
			}
		cout << endl;
		}
	}

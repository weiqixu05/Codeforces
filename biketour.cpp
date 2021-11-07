#include <iostream> 
using namespace std;

int n;
int arr[110];

void gogo() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		}
	int ans = 0;
	for (int i = 0; i < n - 1; i++) {
		if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
			ans++;
			}
		cout << ans << "\n";
		}
	}
	
int main() {
	ios_base::sync_with_stdio(0);
	
	int t; cin >> t;
	for (int i = 0; i < t; i++) {
		cout << "Case #" << i + 1 << ": ";
		gogo();
		}
	}

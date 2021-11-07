#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[n][n];
    int xsum = 0;
    int ysum = 0;
    int sum = 0;
    for (int b = 0; b < n; b++) {
    for (int i = 0; i < n; i++) {
        cin >> a[b][i];
    if (i == b) {
        xsum += a[b][i];
        }
    if (b == n - i - 1) {
        ysum += a[b][i];
        }
        }
    }
    if (ysum > xsum) {
        sum = ysum - xsum;
        }
    else if (xsum > ysum) {
        sum = xsum - ysum;
        }
        else if (xsum == ysum) {
            sum = 0;
            }
    cout << sum;
}    




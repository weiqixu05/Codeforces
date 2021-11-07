#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;
int main() {
    int n;
    cin >> n;
    for (int i = 1; i < n + 1; i++) {
        for (int x = n; x > i; x--) {
            cout << " ";
            }
        for (int y = 0; y < i; y++) {
            cout << "#";
            }
        cout << endl;
        }
}



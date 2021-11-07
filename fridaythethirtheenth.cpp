/*
 ID: weiqixu1
 PROG: friday
 LANG: C++
 */

#include <bits/stdc++.h>
using namespace std;
int main() {
	freopen("friday.in", "r", stdin); freopen("friday.out", "w", stdout);
	int n;
	cin >> n;
	int days[7] = {0};
	int year = 1900;
	int day = 0;
	int month[12]={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	for (int m = 0; m < n; m++) {
		
			for (int i = 0; i < 12; i++) {
				days[(13+day)%7]++;
				if (year%4==0 && year != 1900 && year != 2100 && year != 2200 && year != 2300) {
				day = (month[i]+day)%7;
				month[1] = 29;
					}
					else {
						day = (month[i]+day)%7;
						}
			}
			month[1] = 28;
			year++;
	}
	cout << days[6] << " ";
	for (int i = 0; i < 5; i++) {
		cout << days[i] << " ";
		}
	cout << days[5] << "\n";
}

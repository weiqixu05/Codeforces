 #include <bits/stdc++.h>
using namespace std;

void binarysearch() {
	int n,x;
	cin >> n >> x;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >>a[i];
		}
	int l = 0;
	int r = n-1;
	int mid = l+(r-l)/2;
	while (l<=r) {
		if(a[mid]==x) {
			break;
			}
		else {
			a[mid]>x?r=mid-1:l=mid+1;
			}
		}
		int min = mid;
	while (min>=1) {
		if(a[min-1]!=x) {
			break;
			}
		else {min--;}
		}
	int max = mid;
	while (max<n-1) {
		if(a[max+1]!=x) {
			break;
			}
		else{max++;}
		}
	cout << min << " " << max;
	}


int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	binarysearch();
	}

/*
#include <bits/stdc++.h>
using namespace std;
int main() {
	int n,x;
	cin >> n>>x;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		}
	cout << *lower_bound(a,a+n,x) << " ";
	cout << *upper_bound(a,a+n,x)-1;
	} */
	
	
	
	
	
	
	
	
	
	

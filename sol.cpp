#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	int a[n];
	int elodreip = 0;
	// for better understanding, check the image in this repository
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		// get the total votes of elodreip
		elodreip += a[i];
	}
	// get the max number of votes, this is where we will get the 'k' value
	int mx = *max_element(a, a + n);
	// get the product of max votes and n because we'll use this to get the 
	// current total votes of awruk
	// this is like (k - a[i]), but in overall sum
	int awruk = mx * n;
	// (awruk - elodreip) will give the current total number of votes for awruk
	// now run a loop while adding to the max vote,
	// and get the product of max votes and again
	while (abs(awruk - elodreip) <= elodreip) {
		// increase the max votes or 'k' needed until awruk's total votes is greater than elodreip
		mx++;
		awruk = mx * n;
	}
	cout << mx << '\n';
	return 0;
}

#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		vector<int> a(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		// sort the sequence in non-decreasing order
		sort(a.begin(), a.end());
		int res = 0;
		for (int i = 0; i < n; i++) {
			if (a[i] == 0) {
				// if the current element is zero, then increment 'res'
				res++;
			} else {
				if (a[i] <= res) {
					// otherwise, check if the expected number of people of the 
					// i-th friend is less than or equal to the current number of
					// people in the party. If yes, then increment 'res' again
					// to add this person the current number of the people
					res++;
				}
			}
		}
		cout << res << '\n';
	}
	return 0;
}

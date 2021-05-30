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
		// sort the array in non-decreasing order
		sort(a.begin(), a.end());
		int sol = 0;
		for (int i = 0; i < n; i++) {
			if (a[i] <= i) {
				// check if the demand of the friend ('a[i]') can be accommodated
				// by the number of friends that can be added up to a certain point or the index itself
				// for example, if the current index or position is 3, then the demand
				// of the friend must be less than or equal to that position because
				// that is the maximum number of people that can be invited up to that point
				sol++;
			} else {
				// otherwise, break the loop since the next numbers will be greater than
				// where the condition above went false
				break;
			}
		}
		cout << sol << '\n';
	}
	return 0;
}

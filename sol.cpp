#include <bits/stdc++.h>
 
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n, x, y;
		cin >> n >> x >> y;
		vector<int> a(n), b(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		for (int i = 0; i < n; i++) {
			cin >> b[i];
		}
		set<int> s;
		for (int i = 0; i < n; i++) {
			// for every b[i], it is always greater than or equal to
			// a[i] where where 0 <= i <= (N - 1)
			// in order for the sequence to be valid, the difference
			// between every b[i] and a[i] (b[0] - a[0], b[1] - a[1], ..., b[n - 1] - a[n - 1])
			// is either equal to x or y, otherwise the sequence is not valid
			assert(b[i] >= a[i]);
			s.insert(b[i] - a[i]);
		}
		bool checker = true;
		for (auto& e : s) {
			checker &= (e == x || e == y);
		}
		cout << (checker ? "Yes" : "No") << '\n';
	}
	return 0;
}

#include <bits/stdc++.h>
 
using namespace std;

 
void solve() {
	int n;
	long long x;
	cin >> n >> x;
	long long a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	long long lo = 0, hi = 2'000'000'007;
	while (lo < hi) {
		long long mid = lo + (hi - lo + 1) / 2;
		long long total = 0;
		for (int i = 0; i < n; i++) {
			total += max(mid - a[i], 0LL);
		}
		if (total <= x) {lo = mid;} 
		else {hi = mid - 1;}
	}
	cout << lo << endl;
}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int tt; cin >> tt;
    while(tt--)
    {
        solve();
    }
	// solve();
}
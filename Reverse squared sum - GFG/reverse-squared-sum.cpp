#include<bits/stdc++.h>
using namespace std;

void solve() {
	int t; cin >> t;

	while (t--) {
		int n; cin >> n;
		vector<int> arr(n);

		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}

		reverse(arr.begin(), arr.end());

		int ans = 0;

		for (int i = 0; i < n; i++)
		{
			if (i % 2 == 0) {
				ans += arr[i] * arr[i];
			} else {
				ans -= arr[i] * arr[i];
			}
		}

		cout << ans << endl;


	}
}

int main()
 {
// 	cout<<"Hello Everyone!";
    solve();
	return 0;
}
#include<bits/stdc++.h>
#define int long long
using namespace std;

// not wright

const int N = 0;

signed main(){
	int n;
	cin >> n;
	vector<int> a(n);
	int sum = 0;
	for(int i = 0; i < n; i++) {
		cin >> a[i];
		sum += a[i];
	}
	
	double av = sum / n;
	int x;
	if(av > (av) + 0.5) {
		x = (int)av + 1;
	} else x = (int) av;
	
	int ans = 0;
	for(int i = 0; i < n; i++) {
		ans += abs(a[i] - x);
	}
	cout << ans;
	
}
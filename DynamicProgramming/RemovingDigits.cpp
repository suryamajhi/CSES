#include<bits/stdc++.h>
using namespace std;

const int INF = 1e9;

int main(){
	int n;
	cin >> n;
	
	vector<int> dp(n + 1, INF);
	dp[0] = 0;
	for(int i = 1; i <= n; i++) {
		for(int v = i; v > 0; v /= 10) {
			int d = v % 10;	
			dp[i] = min(dp[i], dp[i - d] + 1);
		}
	}
	cout << dp[n];
}
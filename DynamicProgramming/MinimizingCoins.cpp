#include<bits/stdc++.h>
using namespace std;

const int N = 0;

int main(){
	int n, x;
	cin >> n >> x;
	
	vector<int> coins(n);
	for(int i = 0; i < n; i++) cin >> coins[i];
		
	vector<int> dp(x + 1, INT_MAX);
	dp[0] = 0;
	for(int i = 1; i <= x; i++) {
		for(auto p: coins) {
			if(i - p < 0 || dp[i - p] == INT_MAX) continue;
			dp[i] = min(dp[i], dp[i - p] + 1);
		}
	}
	if(dp[x] == INT_MAX) cout << -1;
	else cout << dp[x];
	
}
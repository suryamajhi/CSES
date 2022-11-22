#include<bits/stdc++.h>
using namespace std;

const int mod = 1e9 + 7;

int main(){
	int n, x;
	cin >> n >> x;
	vector<int> coins(n);
	for(int i = 0; i < n; i++) cin >> coins[i];
		
	vector<int> dp(x + 1, 0);
	dp[0] = 1;
  	for(int i = 1; i <= x; i++) {
		long long sum = 0;
		for(auto a: coins) {
			if(i - a < 0) continue;
			sum += dp[i - a];
		}
		dp[i] = sum % mod;
	}
	cout << dp[x];
}
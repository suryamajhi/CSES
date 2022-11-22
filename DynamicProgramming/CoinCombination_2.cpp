#include<bits/stdc++.h>
using namespace std;
 
const int mod = 1e9 + 7;

// need to revisit, didn't got in my head
 
int main(){
	int n, x;
	cin >> n >> x;
	vector<int> coins(n);
	for(int i = 0; i < n; i++) cin >> coins[i];
		
	vector<vector<int>> dp(n + 1, vector<int>(x + 1, 0));
	for(int i = 0; i <= n; i++) dp[i][0] = 1;
	for(int i = n - 1; i >= 0; i--) {
		for(int j = 1; j <= x; j++) {
			if(coins[i] <= j)
				dp[i][j] = (dp[i][j - coins[i]] % mod + dp[i + 1][j] % mod) % mod;
			else dp[i][j] = dp[i + 1][j] % mod;
		}
	}	
	cout << dp[0][x];
}
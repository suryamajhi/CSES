#include<bits/stdc++.h>
using namespace std;

const int mod = 1e9 + 7;

int main(){
	int n;
	cin >> n;
	char grid[n][n];
	for(int i = 0; i < n; i++)
		for(int j = 0; j < n; j++)
			cin >> grid[i][j];
	
	vector<vector<long long>> dp(n + 1, vector<long long> (n + 1, 0));
	if(grid[0][0] != '*')
		dp[1][1] = 1;
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= n; j++) {
			if(grid[i - 1][j - 1] == '*') continue;
			
			dp[i][j] += (dp[i][j - 1] + dp[i - 1][j]) % mod;
		}
	}
	
	cout << dp[n][n];
}
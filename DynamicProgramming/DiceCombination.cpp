#include<bits/stdc++.h>
using namespace std;

const int mod = 1e9 + 7;

int main(){
	int n;
	cin >> n;
	
	vector<int> dp(n + 1);
	dp[0] = 1;
	
	for(int i = 1; i <= n; i++) {
		long long sum = 0;
		for(int j = 1; j <= 6; j++) {
			if(i - j < 0) continue;
			sum += dp[i - j] % mod;
		}
		dp[i] = sum % mod;
	}
	cout << dp[n];
	return 0;
}
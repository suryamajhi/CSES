#include<bits/stdc++.h>
using namespace std;

const int N = 1e6 + 1;

// later, I will understand you.

int main(){
	int n, x;
	cin >> n >> x;
	vector<int> price(n + 1);
	vector<int> pages(n + 1);
	for(int i = 1; i <= n; i++) cin >> price[i];
	for(int i = 1; i <= n; i++) cin >> pages[i];
		
	// no of book, at most x  stores max number of pages
	vector<vector<int>> dp(n + 1, vector<int>(x + 1, 0));


	for(int i = 0; i <= n; i++) {
		for(int j = 0; j <= x; j++) {
			if(j == 0 || i == 0)
				dp[i][j] = 0;
			else {
				int op1 = (i == 1) ? 0: dp[i - 1][j];
				int op2 = (j < price[i]) ? 0: pages[i] + dp[i - 1][j - price[i]];
				
				dp[i][j] = max(op1, op2);
			}
		}
	}
	
	cout << dp[n][x];
}
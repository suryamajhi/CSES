#include<bits/stdc++.h>
using namespace std;

const int N = 0;

int main(){
	long long n, current = 5, ans = 0;
	cin >> n;
	
	// sigma k = 1 to M floor(N/5^k)
	
	while(current <= n) {
		ans += n / current;
		current *= 5;
	}
	cout << ans;
}
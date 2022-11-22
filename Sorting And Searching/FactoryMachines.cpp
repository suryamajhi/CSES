#include<bits/stdc++.h>
#define int long long
using namespace std;

const int N = 0;

signed main(){
	int n, t;
	cin >> n >> t;
	vector<int> k(n);
	for(int i = 0; i < n; i++) cin >> k[i];
	auto Good = [&](int m, vector<int> k, int t) {
		int totalProduct = 0;
		for(int i = 0; i < k.size(); i++) {
			totalProduct += m / k[i];
		}
		return totalProduct >= t;
	};
		
	int l = -1;
	int r = 1;
	while(!Good(r, k, t)) r *= 2;
	
	while(r > l + 1) {
		int m = (r + l) / 2;
		if(Good(m, k, t)) r = m;
		else l = m;
	}
	cout << r;
}
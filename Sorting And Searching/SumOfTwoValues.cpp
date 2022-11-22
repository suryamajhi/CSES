#include<bits/stdc++.h>
#define int long long
using namespace std;

const int N = 0;

signed main(){
	int n, x;
	cin >> n >> x;
	vector<int> a(n);
	map<int, int > mpp;
	for(int i = 0; i < n; i++) {
		cin >> a[i];
		mpp[a[i]] = i;
	} 
	
	for(int i = 0; i < n; i++) {
		
		if(mpp.count(x - a[i])) {
			if(mpp[x - a[i]] == i) continue;
			cout << i + 1 << ' ' <<  mpp[x - a[i]] + 1;
			return 0;
		}
	}
	cout << "IMPOSSIBLE";
}
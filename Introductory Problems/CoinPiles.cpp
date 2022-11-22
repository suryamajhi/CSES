#include<bits/stdc++.h>
using namespace std;

const int N = 0;

void solve() {
	long long a, b;
	cin >> a >> b;
	
	if(a < b) swap(a, b);
	if(a > 2 * b) {
		cout << "NO\n";
		return;
	}
	if((a + b) % 3 == 0) {
		cout << "YES\n";
	} else cout << "NO\n";
	
}

int main(){
	int t;
	cin >> t;
	while(t--) solve();
}
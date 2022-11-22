#include<bits/stdc++.h>
using namespace std;

const int N = 0;

void solve() {
	long long row, column;
	cin >> row >> column;
	
	if(row == column) {
		cout << row * row - (row - 1) << endl;
		return;
	}
	long long maax = max(row, column);
	if(maax % 2 == 0) {
		if(row > column) {
			cout << maax * maax - (column - 1);
		} else cout << maax * maax - (2 * maax - row - 1);
	} else {
		if(row > column) {
			cout << maax * maax - (2 * maax - column - 1);
		} else cout << maax * maax - (row - 1);
	}
	
	cout << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--) solve();
}
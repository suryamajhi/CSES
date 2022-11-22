#include<bits/stdc++.h>
using namespace std;

const int N = 0;

int main(){
	int n;
	cin >> n;
	set<int> ss;
	for(int i = 0; i < n - 1; i++) {
		int x;
		cin >> x;
		ss.insert(x);
	}
	
	for(int i = 1; i <= n; i++) {
		if(!ss.count(i)){
			cout << i;
			return 0;
		}
	}
	
	return 0;
	
}
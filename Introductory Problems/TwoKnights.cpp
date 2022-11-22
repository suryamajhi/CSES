#include<bits/stdc++.h>
using namespace std;

const int N = 0;

int main(){
	int n;
	
	cin >> n;
	cout << 0 << endl;
	for(long long i = 2; i <= n; i++) {
		cout << (i * i) * (i * i - 1) / 2 - 4 * (i - 2) * (i - 1) <<endl;
	}
}
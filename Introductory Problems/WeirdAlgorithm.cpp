#include<bits/stdc++.h>
using namespace std;

const int N = 0;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	long long n;
	cin >> n;
	while(n != 1) {
		cout << n << " ";
		if(n % 2 == 0) n /= 2;
		else n = n * 3 + 1;
	}
	cout << 1;
}
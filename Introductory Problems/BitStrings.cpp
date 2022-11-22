#include<bits/stdc++.h>
using namespace std;

const int mod = 1e9 + 7;

int main(){
	long long n;
	cin >> n;
	
	long long sum = 1;
	while(n--) {
		sum *= 2;
		sum %= mod;
	}
	cout << sum;
}
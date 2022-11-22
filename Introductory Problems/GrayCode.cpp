#include<bits/stdc++.h>
using namespace std;

const int N = 0;

int main(){
	int n;
	cin >> n;
	
	for(int i = 0; i < (1 << n); i++) {
		int val = int ^ (i >> 1);
		
		bitset<32> r(val);
		
		string s = r.to_string();
		cout << s.substr(32 - n) << endl;
	}
}
#include<bits/stdc++.h>
#define int long long
using namespace std;

const int N = 0;
int min_ans = 1e9 + 7;
int sum = 0;


int iterate(int i, vector<int>& a, int sum , int groupSum) {
	if(i == 0) {
		return abs((sum - groupSum) - groupSum);
	}
	
	return min(iterate(i - 1, a, sum , groupSum + a[i]), iterate(i - 1, a, sum , groupSum));
	
}

signed main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int n;
	cin >> n;
	vector<int> a(n);
	for(int i = 0; i < n; i++) {
		cin >> a[i];
		sum += a[i];
	}
	
	cout << iterate(n - 1, a, sum, 0) << endl;
}
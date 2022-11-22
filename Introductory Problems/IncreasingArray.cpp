#include<bits/stdc++.h>
using namespace std;

const int N = 0;

int main(){
	
	int n;
	cin >> n;
	vector<int> a(n);
	for(int i = 0; i < n; i++) cin >> a[i];
		
	int current = a[0];
	long long totalChanges = 0;
	for(int i = 1; i < n; i++) {
		if(a[i] < current){
			totalChanges +=  current - a[i];
		} else current = a[i];
	}
	cout << totalChanges;
}
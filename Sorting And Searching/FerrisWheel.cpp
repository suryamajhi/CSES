#include<bits/stdc++.h>
using namespace std;

const int N = 0;

int main(){
	int n, x;
	cin >> n >> x;
	vector<int> child(n);
	for(int i = 0; i < n; i++) cin >> child[i];
	
	sort(child.begin(), child.end());
	int totalGondola = 0;
	int i = 0, j = n - 1;
	
	while(i <= j) {
		if(child[i] + child[j] <= x) {
			i++;
			j--;
			totalGondola++;
		} else {
			j--;
			totalGondola++;
		}
	}
	
	cout << totalGondola;
}
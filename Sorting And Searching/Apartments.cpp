#include<bits/stdc++.h>
using namespace std;

const int N = 0;

//TLE :D

int main(){
	int n, m, k;
	cin >> n >> m >> k;
	vector<int> applicants(n);
	vector<int> appartment(m);
	for(int i = 0; i < n; i++) cin >> applicants[i];
	for(int i = 0; i < m; i++) cin >> appartment[i];
		
	sort(appartment.begin(), appartment.end());
	sort(applicants.begin(), applicants.end());
	int maxCount = 0;
	int i = 0, j = 0;
	
	while(i < applicants.size() && j < appartment.size()) {
		if(abs(appartment[j] - applicants[i]) <= k) {
			i++;
			j++;
			maxCount++;
		} else {
		
			if(applicants[i] - appartment[j] > k) {
				j++;
			} else i++;
		
		}
	}
	cout << maxCount;
}
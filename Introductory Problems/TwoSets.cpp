#include<bits/stdc++.h>
using namespace std;

const int N = 0;

int main(){
	int n;
	cin >> n;
	
	if((n * (n + 1)) % 4 != 0 ) {
		cout << "NO";
	} else {
		cout << "YES\n";
		vector<int> list1;
		vector<int> list2;
		if(n % 4 == 0) {
			for(int i = n; i >= 1; i -= 4) {
				list1.push_back(i);
				list1.push_back(i - 3);
				list2.push_back(i - 1);
				list2.push_back(i - 2);
			}
		} else {
			for(int i = n; i > 3; i -= 4) {
				list1.push_back(i);
				list1.push_back(i - 3);
				list2.push_back(i - 1);
				list2.push_back(i - 2);
			}
			list1.push_back(3);
			list2.push_back(2);
			list2.push_back(1);
		}
		
		cout << list1.size() << endl;
		for(auto x: list1) cout << x << ' ';
		cout << endl;
		cout << list2.size() << endl;
		for(auto x: list2) cout << x << ' ';
		
	}
}
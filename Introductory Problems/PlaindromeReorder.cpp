#include<bits/stdc++.h>
using namespace std;

string convertToString(char* a, int size)
{
    int i;
    string s = "";
    for (i = 0; i < size; i++) {
        s = s + a[i];
    }
    return s;
}

int main(){
	string s;
	cin >> s;
	int n = s.size();
	map<char, int> mpp;
	for(int i = 0; i < n; i++) {
		mpp[s[i]]++;
	}
	int oddCount = 0;
	char oddOne;
	for(auto x: mpp) {
		if(x.second % 2 == 1){
		 oddCount++;
		 oddOne = x.first;
		}
	}
	if((n % 2 == 0 && oddCount != 0) || (n % 2 == 1 && oddCount != 1)) {
		cout << "NO SOLUTION";
		return 0;
	}
	vector<char> ans(n);
	if(n % 2 == 0) {
		int i = 0;
		for(auto x: mpp) {
			for(int j = 1; j <= x.second; j += 2){
				ans[i] = x.first;
				ans[n - 1 - i] = x.first;
				i++;
			}
		}
	}
	else {
		int i = 0;
		ans[n/2] = oddOne;
		mpp[oddOne]--;
		for(auto x: mpp) {
			for(int j = 1; j <= x.second; j += 2){
				ans[i] = x.first;
				ans[n - 1 - i] = x.first;
				i++;
			}
		}
	}
	string answer(ans.begin(), ans.end());

	cout << answer << endl;
}
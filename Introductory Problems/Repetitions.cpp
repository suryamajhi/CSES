#include<bits/stdc++.h>
using namespace std;

const int N = 0;

int main(){
	string s;
	cin >> s;
	
	char ch = s[0];
	int length = 1;
	int max_length = 1;
	for(int i = 1; i < s.size(); i++) {
		if(s[i] == ch) {
			length++;
			
		} else {
			if(max_length < length) max_length = length;
			ch = s[i];
			length = 1;
		}
	}
	if(max_length < length) max_length = length;
	
	cout << max_length;
	
}
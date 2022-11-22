#include<bits/stdc++.h>
using namespace std;

const int N = 0;
set<string> st;

void iterate(int i, vector<char>& ch, vector<bool>& visited, vector<char>& ans) {
	if(ans.size() == ch.size()) {
		string x(ans.begin(), ans.end());
		st.insert(x);
		return;
	}
	for(int i = 0; i < ch.size(); i++) {
		if(!visited[i]) {
			visited[i] = true;
			ans.push_back(ch[i]);
			iterate(i, ch, visited, ans);
			visited[i] = false;
			ans.pop_back();
		}
	}
}

int main(){
	string s;
	cin >> s;
	
	

	vector<char> ch(s.begin(), s.end());
	
	vector<bool> visited(s.size());
	vector<char> ans;
	
	for(int i = 0; i < s.size(); i++) {
		visited[i] = true;
		ans.push_back(ch[i]);
		iterate(i, ch, visited, ans);
		visited[i] = false;
		ans.pop_back();
	}
	
	cout << st.size() << endl;
	for(auto x: st) {
		cout << x << endl;
	}
}
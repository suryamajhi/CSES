#include<bits/stdc++.h>
using namespace std;

const int N = 0;

struct DisjoinSet {
	vector<int> p, size;
	
	void init(int n) {
		p.resize(n+1);
		size.resize(n + 1);
		
		for(int i = 1; i <= n; i++){
            p[i] = i;
            size[i] = 1;
        }   
	}
	
	int get(int a) {
        return p[a] = (p[a] == a ? a: get(p[a]));
    }
    
    void unionn(int a, int b) {
    	a = get(a);
    	b = get(b);
    	if(size[a] > size[b]) {
    		swap(a, b);
    	}
    	p[a] = b;
    	size[b] += size[a];
    }
};


int main(){
	int n, m;
	cin >> n >> m;
	
	DisjoinSet dsu;
	dsu.init(n);
	while(m--) {
		int a, b;
		cin >> a >> b;
		dsu.unionn(a, b);
	}
	set<int> st;
	for(int i = 1; i <= n; i++) {
		st.insert(dsu.get(i));
	}
	cout << st.size() - 1 << endl;
	vector<int> vec(st.begin(), st.end());
	for(int i = 0; i < vec.size() - 1; i++) {
		cout << vec[i] << ' ' << vec[i + 1] << endl;
	}
}
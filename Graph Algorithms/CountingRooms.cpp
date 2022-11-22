#include<bits/stdc++.h>
using namespace std;

int n, m;

bool valid(int x, int y) {
	return x >= 0 && y >= 0 && x < n && y < m;
}

void dfs(int i, int j, vector<vector<char>>& grid, vector<vector<bool>>& visited) {
	visited[i][j] = true;
	if(valid( i - 1, j) && grid[i - 1][j] == '.' && !visited[i - 1][j]) {
		dfs(i - 1, j, grid, visited);
	}
	if(valid( i + 1, j) && grid[i + 1][j] == '.' && !visited[i + 1][j]) {
		dfs(i + 1, j, grid, visited);
	}
	if(valid( i, j - 1) && grid[i][j - 1] == '.' && !visited[i][j - 1]) {
		dfs(i, j - 1, grid, visited);
	}
	if(valid( i, j + 1) && grid[i][j + 1] == '.' && !visited[i][j + 1]) {
		dfs(i, j + 1, grid, visited);
	}
}



int main(){
	cin >> n >> m;
	
	vector<vector<char>> grid(n, vector<char>(m));
	vector<vector<bool>> visited(n, vector<bool> (m, false));
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			cin >> grid[i][j];
		}
	}
	int count = 0;
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			if(grid[i][j] == '#' || visited[i][j]) continue;
			count++;
			dfs(i, j, grid, visited);
		}
	}
	cout << count;
	
}
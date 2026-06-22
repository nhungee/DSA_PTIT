#include <bits/stdc++.h>

using namespace std; 

int ke[10005][1005]; 
int deg[1005];
bool used[1005];

void DFS(int k){
	used[k] = true; 
	cout << k << " ";
	for(int i= 1; i <= deg[k]; i++){
		if(!used[ke[k][i]]) DFS(ke[k][i]);
	} 
		
}
int main(){
	int t; cin >> t; 
	while(t--){
		memset(ke, 0, sizeof(ke));
		memset(deg, 0, sizeof(deg));
		memset(used, 0, sizeof(used));
		int n, m, u; cin >> n >> m >> u; 
		for(int i = 1;  i <= m; i++){
			int x, y; cin >> x >> y; 
			ke[x][++deg[x]] = y; 
		}
		DFS(u);
		cout << endl; 
	}
}
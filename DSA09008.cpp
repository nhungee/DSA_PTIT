#include <bits/stdc++.h>

using namespace std;

int n, m ;
int ke[1005][1005]; 
int deg[1005]; 
bool used[1005]; 
 
void DFS(int u){
	used[u] = true; 
	for(int i = 1; i <= deg[u]; i++){
		if(!used[ke[u][i]]){
			DFS(ke[u][i]);
		}
	}
}

int TPLT(){
	int solt = 0; 
	for(int i = 1; i <= n ; i++){
		if(!used[i]){
			solt++; 
			DFS(i); 
		}
	}
	return solt;
}
 
int main(){
	int t;
	cin >> t;
	while(t--){
		memset(ke, 0, sizeof(ke)); 
		memset(deg, 0, sizeof(deg)); 
		memset(used, false, sizeof(used)); 
		cin >> n  >> m; 
		for(int i = 1 ; i <= m ; i++){
			int x, y; cin >> x >> y; 
			ke[x][++deg[x]] = y; 
			ke[y][++deg[y]] = x; 
		}
		cout << TPLT() << endl; 
	}
	
}

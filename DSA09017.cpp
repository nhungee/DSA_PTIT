#include <bits/stdc++.h>

using namespace std;

int ke[1005][1005]; 
int deg[1005]; 
int used[1005]; 
int n;

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
	for(int i = 1; i <= n; i++){
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
		memset(used, 0, sizeof(used));
		cin >> n ; 
		for(int i = 0;i < n-1; i++){
			int x , y ; cin >> x >> y; 
			ke[x][++deg[x]] = y ; 
			ke[y][++deg[y]] = x;
		}
		if(TPLT() == 1){
			cout << "YES\n";
		}else{
			cout << "NO\n";
		}
	}
}

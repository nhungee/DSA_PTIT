#include <bits/stdc++.h>

using namespace std;

int n , m; 
int ke[1005][1005]; 
int deg[1005]; 
bool used[1005]; 

void BFS(int u){
	queue<int> q; 
	q.push(u); 
	used[u] = true; 
	while(!q.empty()){
		int s = q.front(); q.pop(); 
		for(int i = 1; i <= deg[s]; i++){
			if(!used[ke[s][i]]){
				q.push(ke[s][i]);
				used[ke[s][i]] = true;
			}
		}
	}
}

int TPLT(){
	int solt = 0;
	for(int u = 1;  u <= n ; u++){
		if(!used[u]){
			solt++;
			BFS(u); 
		}
	}
	return solt;
}
int main(){
	int t;
	cin >> t;
	while(t--){
        memset(deg, 0, sizeof(deg));
        memset(used, false, sizeof(used));
		cin >> n >> m; 
		for(int i = 1; i <= m ; i++){
			int x, y; 
			cin >> x >> y; 
			ke[x][++deg[x]] = y; 
			ke[y][++deg[y]] = x; 
		}
		cout << TPLT() << endl;
	}
}

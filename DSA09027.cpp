#include <bits/stdc++.h>

using namespace std;
int ke[1005][1005];
int deg[1005];
bool used[1005];
int truoc[1005]; 

void DFS(int u){
	used[u] = true; 
	for(int i = 1; i <= deg[u]; i++){
		if(!used[ke[u][i]]){
			truoc[ke[u][i]] = u;
			DFS(ke[u][i]);
		}
	}
}

//void BFS(int u){
//	queue<int> q; 
//	q.push(u); 
//	used[u] = true;
//	while(!q.empty()){
//		int s = q.front(); q.pop(); 
////		cout << s << " "; 
//		for(int i = 1; i <= deg[s]; i++){
//			if(!used[ke[s][i]]){
//				q.push(ke[s][i]);
//				used[ke[s][i]] = true;
//				truoc[ke[s][i]] = s;
//			}
//		}
//	}
//}

void route(int s, int t){
	if(s != t  && truoc[t] == 0){
		cout << "NO\n"; 
		return;
	}
	else{
		cout << "YES\n";
		return;
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		memset(ke, 0, sizeof(ke)); 
		memset(deg, 0, sizeof(deg)); 
 
		int n, m; 
		cin >> n >> m; 
		for(int i = 1; i <= m ; i++){
			int x, y; 
			cin >> x >> y; 
			ke[x][++deg[x]] = y; 
			ke[y][++deg[y]] = x; 
		}
		int q; cin >> q; 
		while(q--){
			memset(used, 0, sizeof(used)); 
			memset(truoc, 0, sizeof(truoc));
			int s, t; 
			cin >> s >> t; 
			DFS(s); 
			route(s, t); 
		}
	}
}

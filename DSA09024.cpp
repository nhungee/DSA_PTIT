#include <bits/stdc++.h>

using namespace std; 

int ke[10005][1005]; 
int deg[1005];
bool used[1005];
//int truoc[1005];
void BFS(int u){
	queue<int> q; 
	q.push(u); 
	used[u] = true;
	while(!q.empty()){
		int s = q.front(); q.pop(); 
		cout << s << " "; 
		for(int i = 1; i <= deg[s]; i++){
			if(!used[ke[s][i]]){
				q.push(ke[s][i]);
				used[ke[s][i]] = true;
//				truoc[ke[s][i]] = s;
			}
		}
	}
}

//void route(int s, int t){
//	if(truoc[t] == 1){
//		cout << "-1"; 
//		
//	}
//}
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
		BFS(u);
		cout << endl; 
	}
}
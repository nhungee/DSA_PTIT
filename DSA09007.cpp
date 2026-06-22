#include <bits/stdc++.h>

using namespace std; 

int ke[10005][1005]; 
int deg[1005];
bool used[1005];
int truoc[1005];

void BFS(int u){
	queue<int> q; 
	q.push(u); 
	used[u] = true;
	while(!q.empty()){
		int s = q.front(); q.pop(); 
//		cout << s << " "; 
		for(int i = 1; i <= deg[s]; i++){
			if(!used[ke[s][i]]){
				q.push(ke[s][i]);
				used[ke[s][i]] = true;
				truoc[ke[s][i]] = s;
			}
		}
	}
}

void route(int s, int t){
	if(truoc[t] == 0){
		cout << "-1"; 
		return;
	}
	vector<int> path; 
	while(t != s){
		path.push_back(t); 
		t = truoc[t]; 
	}
	path.push_back(s); 
	reverse(path.begin(), path.end());
	for(int x : path){
		cout << x << " "; 
	}
}
int main(){
	int k; cin >> k; 
	while(k--){
		memset(ke, 0, sizeof(ke));
		memset(deg, 0, sizeof(deg));
		memset(used, 0, sizeof(used));
		memset(truoc, 0, sizeof(truoc));
		int n, m, s, t; cin >> n >> m >> s >> t; 
		for(int i = 1;  i <= m; i++){
			int x, y; cin >> x >> y; 
			ke[x][++deg[x]] = y; 
			ke[y][++deg[y]] = x;
		}
		BFS(s);
		route(s, t);
		cout << endl; 
	}
}
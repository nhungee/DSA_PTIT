#include <bits/stdc++.h>

using namespace std;

int ke[1005][1005]; 
int deg[1005]; 
bool used[1005]; 
int truoc[10005];
void DFS(int u){
	used[u] = true;
	for(int i = 1; i <= deg[u]; i++){
		if(!used[ke[u][i]]){
			DFS(ke[u][i]);
			truoc[ke[u][i]] = u;
		}
	}
}

void route(int s, int t){
	if(truoc[t] == 0){
		cout <<  "-1";
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
	int t;
	cin >> t;
	while(t--){
		memset(ke, 0, sizeof(ke));
		memset(deg, 0, sizeof(deg));
		memset(used, 0, sizeof(used));
		memset(truoc, 0, sizeof(truoc));
		int n, m, s, t; 
		cin >> n >> m >> s >> t; 
		for(int i = 1; i <= m ; i++){
			int x, y; 
			cin >> x >> y; 
			ke[x][++deg[x]] = y; 
			ke[y][++deg[y]] = x;
		}
		DFS(s);
		route(s, t); 
		cout << endl;
	}
}

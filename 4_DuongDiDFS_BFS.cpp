#include <bits/stdc++.h>

using namespace std;

int n, m ;
int ke[1001][1001];
int deg[1001];
bool used[1001]; 
int truoc[1001];
void DFS(int u){
	used[u] = true; 
	for(int i = 1; i <= deg[u] ; i++){
		if(!used[ke[u][i]]){
			DFS(ke[u][i]);
			truoc[ke[u][i]] = u;
		}
	}
}

void BFS(int u){
	queue<int> q; 
	q.push(u); 
	used[u] = true;
	while(!q.empty()){
		int s = q.front();q.pop();
		for(int i = 1; i <= deg[s]; i++){
			if(!used[ke[s][i]]){
				q.push(ke[s][i]);
				used[ke[s][i]] = true;
				truoc[ke[u][i]] = s;
			}
		}
		
	}
}

void routeDFS(int s, int t){
	if(!used[t]){
		cout << -1 << endl; 
		return;
	}
	vector<int> path; 
	while(t != s){
		path.push_back(t); 
		t = truoc[t]; 
	}
	path.push_back(s); 
	reverse(path.begin(), path.end()); 
	for(auto x : path){
		cout << x << " "; 
	}
	cout << endl;
}

void routeBFS(int s, int t){
	if(!used[t]){
		cout << -1 << endl; 
		return;
	}
	vector<int> path; 
	while(t != s){
		path.push_back(t); 
		t = truoc[t]; 
	}
	path.push_back(s); 
//	reverse(path.begin(), path.end()); 
	for(auto x : path){
		cout << x << " "; 
	}
	cout << endl;
}

int main(){
	 cin >> n >> m ; 
	for(int i = 0; i < m ; i++){
		int x, y; cin >> x >> y; 
		ke[x][++deg[x]] = y; 
		ke[y][++deg[y]] = x; 
	}
	DFS(1);
	
	for(int i = 2; i <= n; i++)
	    routeDFS(1, i);
	
	memset(used, false, sizeof(used));
	memset(truoc, 0, sizeof(truoc));
	
	BFS(1);
	
	for(int i = 2; i <= n; i++)
	    routeBFS(1, i);
}

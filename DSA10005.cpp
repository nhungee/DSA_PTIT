#include <bits/stdc++.h>

using namespace std;

int n , m ; 
int ke[1005][1005]; 
int deg_out[1005]; 
int deg_in[1005]; 
bool used[1005]; 

void DFS(int u){
	used[u] =  true; 
	for(int i =1; i <= deg_out[u]; i++){
		if(!used[ke[u][i]]) DFS(ke[u][i]);
	}
}

void solve(){
	memset(ke, 0, sizeof(ke)); 
	memset(deg_out, 0, sizeof(deg_out));
	memset(deg_in,0, sizeof(deg_in)); 
	memset(used, false, sizeof(used));
	cin >> n >>m ; 
	for(int i = 1; i  <= m ; i++){
		int x, y ; cin >> x >> y; 
		ke[x][++deg_out[x]] = y; 
		deg_in[y]++;
	}
	
	bool check_deg = true; 
	for(int i = 1; i <= n ; i++){
		if(deg_out[i] != deg_in[i]){
			check_deg  = false; 
			break; 
		}
	}
	if(!check_deg){
		cout << "0\n";
		return;
	}
	
	int start = 0; 
	for(int i = 1; i <= n ; i++){
		if(deg_out[i] > 0){
			start = i; break;
		}
	}
	DFS(start);
	for(int i = 1; i <= n; i++){
		if((deg_out[i] > 0 || deg_in[i] > 0) && !used[i]){
			cout << "0\n";
			return;
		}
	}
	cout << "1\n";
}
int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}

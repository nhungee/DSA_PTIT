#include <bits/stdc++.h>
// tìm chu trinh euler của đồ thị vô hướng
using namespace std;

int n, m ; 
int ke[1005][1005]; 
int deg[1005]; 
int g[1005][1005];
bool used[1005]; 

void DFS(int u){
	used[u] =  true; 
	for(int i =1; i <= deg[u]; i++){
		if(!used[ke[u][i]]) DFS(ke[u][i]);
	}
}

//void euler(int u){
//	stack<int> st; 
//	vector<int> CE;
//	st.push(u); 
//	while(!st.empty()){
//		int s = st.top();
//		int t = 0;
//		while(deg[s] > 0){
//			if(g[s][ke[s][deg[s]]] > 0){
//				t = ke[s][deg[s]];
//				break;
//			}
//			deg[s]--;
//		}
//		if(t != 0){
//			st.push(t); 
//			g[s][t]--;
//			g[t][s]--;
//			deg[s]--;
//		}else{
//			st.pop();
//			CE.push_back(s);
//		}
//	}
//	reverse(CE.begin(), CE.end());
//	for(int v :CE){
//		cout << v  << " ";
//	}
//	cout << "\n"; 
//}

void solve(){
	memset(ke, 0, sizeof(ke)); 
	memset(deg, 0, sizeof(deg)); 
	memset(used, false, sizeof(used));
	cin >> n >> m; 
	for(int i = 1; i  <= m ; i++){
		int x, y ; cin >> x >> y; 
		ke[x][++deg[x]] = y; 
		ke[y][++deg[y]] = x;
//		g[x][y]++;
//		g[y][x]++;
	}
	
	bool check_deg = true; 
	for(int i = 1; i <= n ; i++){
		if(deg[i] % 2 != 0){
			check_deg  = false; 
			break; 
		}
	}
	if(!check_deg){
		cout << "NO\n";
		return;
	}
	
	int start = 0; 
	for(int i = 1; i <= n ; i++){
		if(deg[i] > 0){
			start = i; break;
		}
	}
	if(start == 0){
		cout << "YES\n"; 
		return; 
	}
	DFS(start);
	for(int i = 1; i <= n; i++){
		if(deg[i] > 0 && !used[i]){
			cout << "NO\n";
			return;
		}
	}
	cout << "YES\n";
}
int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}

#include <bits/stdc++.h>
// tìm đường đi euler của đồ thị vô hướng
using namespace std;
int n, m ;
int ke[1005][1005]; 
int deg[1005]; 
int g[1005][1005]; 
bool used[1005] ; 

void DFS(int u){
	used[u] = true; 
	for(int i = 1; i <= deg[u] ; i++){
		if(!used[ke[u][i]]) DFS(ke[u][i]);
	}
}

void euler(int u){
	stack<int> st; 
	vector<int> CE; 
	st.push(u); 
	while(!st.empty()){
		int s = st.top(); 
		int t = 0; 
		while(deg[s] > 0){
			int v = ke[s][deg[s]];
			if(g[s][v] > 0){
				t = v; 
				break; 
			}
			deg[s]--; 
		}
		if(t != 0){
			st.push(t); 
			g[s][t]--;
			g[t][s]--; 
			deg[s]--; 
		}else{
			st.pop(); 
			CE.push_back(s); 
		}
	}
	reverse(CE.begin(), CE.end()); 
	for(int x : CE){
		cout << x << " "; 
	}
	cout << endl;
}

void solve(){
	memset(ke, 0, sizeof(ke)); 
	memset(g, 0, sizeof(g));
	memset(deg, 0, sizeof(deg)); 
	memset(used, false, sizeof(used)); 
	cin >> n >> m; 
	for(int i = 1; i <= m ; i++){
		int x, y; cin >> x >> y; 
		ke[x][++deg[x]] = y; 
		ke[y][++deg[y]] = x; 
		g[x][y]++; 
		g[y][x]++; 
	}
	int le_cnt = 0; // đếm số đỉnh bậc lẻ
	int start_node = 0; // chọn đỉnh lẻ đầu tiên làm đỉnh xuất phát
	int first_node_with_edge = 0; // đỉnh đàu tiên có cạnh dùng khi mà ko co dỉnh bặc lẻ 
	for(int i = 1; i <= n ; i++){
		if(deg[i] > 0 && first_node_with_edge == 0){
			first_node_with_edge = i; 
		}
		if(deg[i] % 2 != 0){
			le_cnt++; 
			if(start_node == 0){
				start_node = i;
			}
		}
	}
	if(le_cnt == 0){
		cout << "2\n";
		return;
	}
	if(le_cnt != 0 && le_cnt != 2){
		cout << "0\n"; 
		return;
	}
	if(start_node == 0){
		cout << "0\n"; 
		return; 
	}
	DFS(start_node); 
	for(int i = 1; i <= n ; i++){
		if(deg[i] > 0  && !used[i]){
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

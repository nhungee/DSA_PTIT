#include <bits/stdc++.h>

using namespace std;

struct Node{
	int x, y, step;
};
int main(){
	int t; cin >> t;
	while(t--){
		int n, m; cin >> n >> m;
		vector<vector<int>> a(n, vector<int>(m));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> a[i][j];
			}
		}
		vector<vector<bool>> visited(n, vector<bool>(m, false));
		queue<Node> q;
		q.push({0, 0, 0});
		visited[0][0] = true;
		int ans = -1;
		while(!q.empty()){
			Node cur = q.front();
			q.pop();
			int x = cur.x;
			int y = cur.y;
			int step = cur.step;
			if(x == n-1 && y == m-1){
				ans = step;
				break;
			}
			int k = a[x][y];
			int nx = x+k; int ny = y;
			if(nx < n && !visited[nx][ny]){
				visited[nx][ny] = true;
				q.push({nx, ny, step+1});
			}
			nx = x; ny = y +k;
			if(ny < m && !visited[nx][ny]){
				visited[nx][ny] = true;
				q.push({nx, ny, step+1});
			}
		}
		cout << ans << endl;
	}
}
#include <bits/stdc++.h>

using namespace std;
int m, n;
int cnt = 0;
void Try(int i, int j){
	if(i == m-1 && j == n-1){
		cnt++;
		return;
	}
	if(i >= m || j >= n) return;
	Try(i, j+1);
	Try(i+1, j);
}
int main(){
	int t;
	cin >> t;
	while(t--){
		
		
		cin >> m >> n;
		int a[m][n];
		for(int i = 0; i < m; i++){
			for(int j = 0; j < n; j++){
				cin >> a[i][j];
			}
		}
		Try(0, 0);
		cout << cnt << endl;
		cnt = 0;
	}
}

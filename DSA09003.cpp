#include <bits/stdc++.h>

using namespace std;

int ke[1005][1005];
int deg[1005];


int main(){
	int t;
	cin >> t;
	while(t--){
		memset(deg, 0, sizeof(deg));
        memset(ke, 0, sizeof(ke));
		int n, m ; cin >> n >> m ; 
		for(int i = 1; i <= m ; i++){
			int x,y; cin >> x >> y; 
			ke[x][++deg[x]] = y;
//			ke[y][++deg[y]] = x;
		}
		for(int i = 1; i <= n; i++){
			cout << i << ": ";
			for(int j = 1; j <= deg[i] ; j++){
				if(ke[i][j]) cout << ke[i][j] << " ";
			}
			cout <<endl;
		}
	}
}

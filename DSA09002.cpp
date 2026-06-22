#include <bits/stdc++.h>

using namespace std; 

int ke[1005][1005];
int deg[1005];
int main(){
	int n; cin >> n; 
	cin.ignore(); 
	memset(deg, 0, sizeof(deg));
	for(int i = 1; i <= n ; i++){
		string s; 
		getline(cin , s);
		stringstream ss(s);
		int w; 
		while(ss >> w){
			ke[i][++deg[i]] = w;
		}
	}
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= deg[i]; j++){
			if(i < ke[i][j]) cout << i << " " << ke[i][j] << endl;
		}
	}
}